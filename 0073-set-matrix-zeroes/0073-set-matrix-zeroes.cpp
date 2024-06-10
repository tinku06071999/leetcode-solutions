class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
       vector<int>horz(c, 1);
       vector<int>vert(r, 1);

       for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
            if(matrix[i][j] == 0){
                horz[j] = 0;
                vert[i] = 0;
            }
           }
       }
       for(int i=0;i<r;i++){
           if(vert[i] == 0){
            for(int j =0;j<c;j++){
                matrix[i][j] = 0;
            }
           }
       }
       for(int i=0;i<c;i++){
           if(horz[i] == 0){
            for(int j =0;j<r;j++){
                matrix[j][i] = 0;
            }
           }
       }
      
    }
};