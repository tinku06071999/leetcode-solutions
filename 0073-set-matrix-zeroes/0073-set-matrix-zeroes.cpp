class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
    //    vector<int>horz(c, 1);
    //    vector<int>vert(r, 1);

    //    for(int i=0;i<r;i++){
    //        for(int j=0;j<c;j++){
    //         if(matrix[i][j] == 0){
    //             horz[j] = 0;
    //             vert[i] = 0;
    //         }
    //        }
    //    }
    //    for(int i=0;i<r;i++){
    //        if(vert[i] == 0){
    //         for(int j =0;j<c;j++){
    //             matrix[i][j] = 0;
    //         }
    //        }
    //    }
    //    for(int i=0;i<c;i++){
    //        if(horz[i] == 0){
    //         for(int j =0;j<r;j++){
    //             matrix[j][i] = 0;
    //         }
    //        }
    //    }

    int col0 = 1;


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j] == 0){
             
             matrix[i][0] = 0;
            
             if(j!=0){
                matrix[0][j] = 0;
            }else{
                col0 = 0;
            }
         }
        }
    }
    for(int i=1;i<r;i++){
        for(int j =1;j<c;j++){
            if(!matrix[i][0] || !matrix[0][j]){
                matrix[i][j] = 0;
            }
        }
    }
   
   if(matrix[0][0] == 0){
       for(int i =0;i<c;i++){
        matrix[0][i] =0;
       }
   }

if(col0 == 0){
    for(int i=0;i<r;i++){
        matrix[i][0] =0;
    }
}
    for(int i =0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
  
   
      
    }
};