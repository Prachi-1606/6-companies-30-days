class Solution {
public:
void rec(int ind,int n,int k,vector<int>&ds, vector<vector<int>>&ans){
    if(k==ds.size()){ 
    if(n==0)
        ans.push_back(ds);
        return;
    }   
    for(int i=ind;i<10;i++){
        ds.push_back(i);
        rec(i+1,n-i,k,ds,ans);
        ds.pop_back();
    }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        rec(1,n,k,ds,ans);
        return ans;
    }
};