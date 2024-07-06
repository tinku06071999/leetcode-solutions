class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int>ans;
        unordered_map<int, int>vp;
        stack<int>st;

        for(int i = m-1; i>=0;i--){
            if(st.empty()){
                vp[nums2[i]] = -1;
            }else{
                while(!st.empty() && st.top() < nums2[i]){
                    st.pop();
                }
                if(st.empty()){
                    vp[nums2[i]] = -1;
                }else{
                    vp[nums2[i]] = st.top();
                }
            }
            st.push(nums2[i]);
        }
        // for(auto i : vp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(int i =0;i<n;i++){
            if(vp.find(nums1[i]) != vp.end()){
                ans.push_back(vp[nums1[i]]);
            }
        }
        return ans;
    }
};