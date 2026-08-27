class Solution {
public:
    
    void getPermu(vector<int>&nums,vector<vector<int>>&sub,int i){
        if(i==nums.size()){
            sub.push_back({nums});
            return;
        }
        for(int idx=i;idx<nums.size();idx++){
            swap(nums[i],nums[idx]);
            getPermu(nums,sub,i+1);
            swap(nums[i],nums[idx]);
            
        }
       
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>sub;
        getPermu(nums,sub,0);
      
        return sub;
        
    }
};