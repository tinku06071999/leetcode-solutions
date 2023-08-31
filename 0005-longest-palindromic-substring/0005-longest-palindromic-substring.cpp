class Solution {
public:
    bool check( string &s,int i, int j){
        while(i<j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
    //    vector<string>substrings;
       int n = s.size();
    //    for(int i=0;i<n;i++){
    //        string temp="";
    //        for(int j=i;j<n;j++){
    //             temp+=s[j];
    //             substrings.push_back(temp);
    //        }
    //    }
    //    int maxi = 0;
    //    string ans = substrings[0];
    //    int m = substrings.size();
    //    for(int i=0;i<m;i++){
    //        int sz = substrings[i].size();
    //        if(check(substrings[i],0,sz-1)){
    //            if(sz> maxi){
    //                maxi = sz;
    //                ans = substrings[i];
    //            }
    //        }
    //    }
    //    return ans;


    // second approach dp

    vector<vector<int>>dp(n,vector<int>(n,0));
       string ans="";
       int maxi=0;
       for(int diff=0;diff<n;diff++){
           for(int i=0, j=i+diff ;j<n;j++,i++){
              if(i==j)dp[i][j]=1;
              else if(diff==1){
                  if(s[i]==s[j])dp[i][j] = 2;
              }
              else {
                  if(s[i]==s[j] && dp[i+1][j-1]){
                  dp[i][j] = dp[i+1][j-1]+2;
                }
              }
              if(dp[i][j] ){
                  maxi = j-i+1;
                  ans = s.substr(i,maxi);
              }
           }
       }
       return ans;
    }
};