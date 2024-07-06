class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int erow = rowSize-1;
        int ecol = colSize -1;
        int srow = 0;
        int scol = 0;
        int total = rowSize * colSize;
        while(srow < rowSize && scol < colSize && total){
            for(int i = scol;i<=ecol && total; i++){
               ans.push_back(matrix[srow][i]);
               total--;
            }
            srow++;
            for(int i = srow;i<=erow && total;i++){
                ans.push_back(matrix[i][ecol]);
               total--;
            }
            ecol--;
            for(int i = ecol; i>=scol && total ; i--){
                ans.push_back(matrix[erow][i]);
               total--;
            }
            erow--;
            for(int i = erow; i>=srow && total; i--){
                ans.push_back(matrix[i][scol]);
               total--;
            }
            scol++;
        }
        return ans;
    }
};