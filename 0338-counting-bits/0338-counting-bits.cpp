class Solution {
public:
    int solve(int n){
        int cnt=0;
        while(n>0){
            int num = n%2;
            if(num==1)cnt++;
            n = n/2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
           int k =  solve(i);
           v.push_back(k);
        }
        return v;
    }
};