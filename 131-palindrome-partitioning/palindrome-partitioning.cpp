class Solution {
public:
    bool isPalin(string part){
        int end=part.length()-1;
        int st=0;
        while(st<=end){
            if(part[st]==part[end]){
                
                st++;
                end--;
            }
            else{
                return false;
            }
            
        }
        return true;

       
    }
    void getAllPartition(string s,vector<string>&partitions,vector<vector<string>>&ans){

        //basecase
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.length();i++){
            string part=s.substr(0,i+1);
            if(isPalin(part)){
                partitions.push_back(part);

                getAllPartition(s.substr(i+1),partitions,ans);

                partitions.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string>partitions;
        vector<vector<string>>ans;

        getAllPartition(s,partitions,ans);
        return ans;
        
    }
};