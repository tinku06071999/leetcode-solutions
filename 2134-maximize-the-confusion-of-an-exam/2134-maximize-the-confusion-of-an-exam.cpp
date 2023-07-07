class Solution {
public:
    int  solve(string s, int k,char c){
        int i=0;
        int j=0;
        int n = s.size();
        int mini = 0;
        int count = 0;
        while(i<n && j<n){
            if(s[j]==c){
             count++;
            }
            while(count>k){
                if(s[i]==c){
                    count--;
                }
                i++;
            }
           mini = max(mini, j-i+1);
           j++;
        }
        return mini;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans1 = solve(answerKey,k,'T');
        int ans2 = solve(answerKey,k,'F');
        return max(ans1, ans2);
    }
};