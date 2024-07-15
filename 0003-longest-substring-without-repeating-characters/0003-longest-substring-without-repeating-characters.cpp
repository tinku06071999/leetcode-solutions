class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>mp;
        int maxi =0;
        int count =0;
        int j =0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            count++;
            while(mp[s[i]] > 1){
                mp[s[j++]]--;
                count--;
            }
        }
        return maxi = max(maxi, count);
    }
};