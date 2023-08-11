class Solution {
public:
    string frequencySort(string s) {
       map<char,int>mp;
       for(int i=0;i<s.size();i++){
         mp[s[i]]++;
       }
       priority_queue<pair<int,char>>pq;

      for(auto it:mp){
          pq.push({it.second,it.first});
      }
      int j=0;
      while(!pq.empty()){
          auto i = pq.top();
          pq.pop();
          int temp = i.first;
          while(temp--){
              s[j++] = i.second;
          }
      }
       return s;
    }
};