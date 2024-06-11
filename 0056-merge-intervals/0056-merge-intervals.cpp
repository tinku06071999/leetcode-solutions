class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end());
        int strt1 = 0;
        int e = intervals[0][1];
        int n = intervals.size();
        vector<vector<int>>ans;
        
       for(int strt2 = 1; strt2< n; ++strt2){
            if(intervals[strt2][0] <= e  ){
               e = max(e, intervals[strt2][1]);
            }else{
                ans.push_back({intervals[strt1][0], e});
                 strt1 = strt2;
                 e = intervals[strt2][1];
            }
           
        } 
        ans.push_back({intervals[strt1][0], e});
        return ans;

       
    }
};