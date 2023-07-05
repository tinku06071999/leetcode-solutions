class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int maxi =0;
    //     int i=0;
    //     while(i<prices.size()){
    //         for(int j=i+1;j<prices.size();j++){
    //            int diff = prices[j]-prices[i];
    //            maxi= max(diff,maxi);
    //         }
    //        i++;
    //     }
    //     return maxi;
    // }

    // second approach with O(n) tc

    // int min_price = INT_MAX;
    // int profit = 0;
    // for(int i=0;i<prices.size();i++){
    //     min_price = min(min_price,prices[i]);
    //     profit = max(profit,prices[i]-min_price);
    // }
    // return profit;
    // }
    //one more simple solution
        int n = prices.size();
        int mini = prices[0];
        int profit = 0;
        int cost = 0;
        for(int i =1; i<n; i++){
            cost = prices[i]-mini;
            profit = max(profit,cost);
            mini = min(prices[i],mini);
        }
        return profit;
   }
};