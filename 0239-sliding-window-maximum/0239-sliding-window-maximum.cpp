class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      vector<int>v;
      priority_queue<pair<int,int>>pq;
      int n = nums.size();
     for(int i=0;i<k;i++){
       pq.push({nums[i],i});
     }
     for(int i=k;i<=n;i++){
        v.push_back(pq.top().first);
        while(!pq.empty() && pq.top().second<=i-k)pq.pop();
        if(i<n)pq.push({nums[i],i});
     }
     return v;
    }
};