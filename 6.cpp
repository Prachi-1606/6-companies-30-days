class Solution {
public:
 void solve(string &digits,int ind,vector<string>&ans, unordered_map <int,string> &mapp,string output){
     if(ind>digits.length()-1){
         ans.push_back(output);
         return;
     }
     int no=digits[ind]-'0';
     string value=mapp[no];
     for(int i=0;i<value.length();i++){
         output.push_back(value[i]);
         solve(digits,ind+1,ans,mapp,output);
         output.pop_back();
     }
 }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)return ans;
        int ind=0;
        string output="";
           unordered_map <int,string> mapp;
  mapp[2] = {"abc"}; // Making int -> string Map given accordingly
        mapp[3] = {"def"};
        mapp[4] = {"ghi"};
        mapp[5] = {"jkl"};
        mapp[6] = {"mno"};
        mapp[7] = {"pqrs"};
        mapp[8] = {"tuv"};
        mapp[9] = {"wxyz"};
       solve(digits,ind,ans,mapp,output);
       return ans;
    }
};