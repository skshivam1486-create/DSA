class Solution {
public:

    set<vector<int>>s;
    void combSum(vector<int>&arr,int i,int tar,vector<int>&comb,vector<vector<int>>&ans){
        
         if(i==arr.size() || tar<0){
            return;
        }

        if(tar==0){
            if(s.find(comb)==s.end()){
                 ans.push_back(comb);
                 s.insert(comb);
                
            }
            return;
           
        }
       
        

        comb.push_back(arr[i]);
        combSum(arr,i+1,tar-arr[i],comb,ans);//single inclusion
        combSum(arr,i,tar-arr[i],comb,ans);//muliple inclusion
        comb.pop_back();//backtrack
        combSum(arr,i+1,tar,comb,ans);//exclued;


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>comb; //combination
        vector<vector<int>>ans;
        
        combSum(candidates,0,target,comb,ans);
        return ans;
        
    }
};