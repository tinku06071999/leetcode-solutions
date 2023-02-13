class Solution {
public:
  int sum(int n){
      if(n<9)return n;
      if(n==10)return 1;
      int ans=0;
      int rem=0;
      while(n>0){
         rem = n%10;
         ans+=rem;
         n = n/10;
      }
      return ans;
  }
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>mp;
        for(int i=lowLimit ; i<= highLimit;i++){
            int k = sum(i);
            mp[k]++;
        }
        int ans = 0;
    
        for(auto it:mp){
             if(it.second>ans)ans=it.second;
        }
        return ans;
    }
};