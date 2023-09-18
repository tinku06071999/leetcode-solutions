class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>>v;
        int row = mat.size();
        int col = mat[0].size();
        for(int i=0;i<row;i++){
            int count=0;
            for(int j=0;j<col;j++){
                if(mat[i][j]==1)count++;
            }
            v.push_back({count,i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<row;i++){
            // int count=0;
            for(int j=0;j<2;j++){
               cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
             ans.push_back(v[i][1]);
        }
        return ans;
    }
};