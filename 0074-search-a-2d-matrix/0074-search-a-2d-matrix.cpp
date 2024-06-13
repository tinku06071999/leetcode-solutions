class Solution {
public:
   bool bs(vector<int>&a, int target){
      int s = 0;
      int e = a.size()-1;
      while(s<=e){
        int mid = (s+e)/2;

        if(a[mid] == target)return 1;
        else if(a[mid] < target) s = mid+1;
        else e = mid-1;
      }
      return 0;
   }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // vector<int>arr;
        int n = matrix.size();
        int m = matrix[0].size();

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<matrix[i][j]<<" ";
        //         arr.push_back(matrix[i][j]);
        //     }
        // }
       
        
        // 
        // for(int i=0;i<n;i++){
        //         if(matrix[i][0]<=target && matrix[i][m-1] >= target){
        //             return bs(matrix[i], target);
        //     }
        // }
        // return 0;

        //
       int s =0;
       int e = m*n-1;
       while(s<=e){
        int mid = (s+e)/2;
        int row = mid / m;
        int col = mid % m;
        if(matrix[row][col] == target)return 1;
        else if(matrix[row][col] < target) s = mid+1;
        else e = mid-1;
       }
       return 0;
    }
};