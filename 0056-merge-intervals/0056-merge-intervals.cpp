class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // int strt1 = 0;
        // int strt2 = 0;
        // int e = intervals[0][1];
        // int n = intervals.size();
        // vector<vector<int>>ans;
        // while(strt2 <n ){
        //     if( strt2 < n-1 && strt1 < n-1 && intervals[strt2 + 1][0] <= e  ){
        //         if(intervals[strt2+1][0] < intervals[strt1][0]){
        //             strt1 = strt2 + 1;
        //         }
        //         e = intervals[strt1+1][1];
        //         strt2 = strt1+1;
        //     }else{
        //         ans.push_back({intervals[strt1][0], e});
        //         strt2++;
        //         strt1 = strt2;
                
        //         if(strt1 < n)e = intervals[strt1][1];
        //     }
        //     // ans.push_back({intervals[strt1][0], e});
        // }
        // return ans;

        if (intervals.empty()) return {};
    
    // Sort the intervals based on the start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> ans;
    int n = intervals.size();
    int strt1 = 0;
    int e = intervals[0][1];
    
    for (int strt2 = 1; strt2 < n; ++strt2) {
        if (intervals[strt2][0] <= e) {
            // There is an overlap
            e = max(e, intervals[strt2][1]);
        } else {
            // No overlap, add the current interval to the result
            ans.push_back({intervals[strt1][0], e});
            strt1 = strt2;
            e = intervals[strt2][1];
        }
    }
    // Add the last interval
    ans.push_back({intervals[strt1][0], e});
    
    return ans;
    }
};