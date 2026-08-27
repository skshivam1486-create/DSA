class Solution {
public:
    void subset(vector<int>&nums,vector<int>&ans,vector<vector<int>>&sub,int i){
        if(i==nums.size()){
            sub.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        subset(nums,ans,sub,i+1);
        //backtracking
        ans.pop_back();
        //crucial step to avoid duplication

            //when we exclude a particular no., then we can't include its repititon.
        
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }

        subset(nums,ans,sub,idx);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        vector<vector<int>>sub;
        subset(nums,ans,sub,0);
        return  sub;
        
    }
};