class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string ans="";
        // for(int i=0;i<strs[0].size();i++){
        //     char ch=strs[0][i];
        //    bool match=true;
        //    for(int j=1;j<strs.size();j++){
        //        if(strs[j].size()<i || ch!=strs[j][i]){
        //         match=false;
        //         break;
        //        }
        //    } 
        //     if(match==false){
        //         break;
        //        }
        //        else{
        //         ans.push_back(ch);
        //        }
        // }
        // return ans;
   int n=strs.size();
   if(n==1) return strs[0];
   sort(strs.begin(),strs.end());
   string first=strs[0];
   string last=strs[n-1];
   string s="";
   for(int i=0;i<(min(first.size(),last.size()));i++){
    if(first[i]==last[i]){
         s+=first[i];
         }
    else return s;
   } 
   return s;
    }
};