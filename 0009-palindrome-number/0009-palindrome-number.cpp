class Solution {
public:
    bool isPalindrome(int x) {
        long long int k=x;
       long long int rev=0,rem=0;
   
       if(x<0)return false;
       if(x>=0 && x<10 ) return true;
        while(k>0){
            rem=k%10;
            k=k/10;
            rev = rev*10+rem;
        }
        return(rev==x);
    }
};