class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        reverse(num.begin(),num.end());
        int i=0,n=num.size();
        int sum=0,c=0;
        int rem=0;
        vector<int>v;
        while( i<n){
            sum=0;
            rem = k%10;
            k=k/10;
            sum+=num[i]+rem+c;
            if(sum>=10){
                c=sum/10;
                num[i] = sum%10;
            }
            else{
                num[i] = sum;
                c=0;
            }
            i++;
        }
        while(k>0)
        {
            sum=0;
            rem = k%10;
            k=k/10;
            sum+=rem+c;
             if(sum>=10){
                c=sum/10;
                num.push_back(sum%10);
            }
            else{
                num.push_back(sum);
                c=0;
            }
        }
        if(c)num.push_back(c);
        reverse(num.begin(),num.end());
        return num;
    }
};