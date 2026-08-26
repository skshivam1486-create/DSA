class Solution {
public:
    void  subset(vector<int>&nums,vector<int>&ans,int i,vector<vector<int>>&sub){
        if(i==nums.size()){
            sub.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        subset(nums,ans,i+1,sub);

        ans.pop_back();
        //exclude
        subset(nums,ans,i+1,sub);

        

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        vector<vector<int>>sub;
        subset(nums,ans,0,sub);
        return sub;
        
    }
};