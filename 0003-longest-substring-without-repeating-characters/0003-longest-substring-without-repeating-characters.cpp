class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int count =0;
       int maxi=0;
       int j=0;
       unordered_map<char,int>mp;
      
       for(int i=0;i<s.size();i++){
              mp[s[i]]++;
              maxi++;
              while(mp[s[i]]>1){
                  mp[s[j++]]--;
                  maxi--;
              }
              count = max(maxi,count);
           }
       return count;
    }
};