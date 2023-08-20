class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // (m*log(n))
        // int rows = matrix.size(),
		// 	cols = matrix[0].size(),
        //     r = 0, c = cols - 1;
        //     int mid = (r+c)/2;
		// while(r < rows){
            
        //     if(matrix[r][0]<=target && matrix[r][c]>=target){
        //         int s = 0;
        //         int e = c;
        //             while(s<=e){
        //                 mid = (s+e)/2;
        //                 if(matrix[r][mid]==target)return true;
        //                 else if(matrix[r][mid]>target) e=mid-1;
        //                 else s = mid+1;
        //             }
        //     }
        //     r++;
        // }
        // return false;
      

      //second approach O(log(m*n));
      
      int m = matrix.size();
	  int n = matrix[0].size();
      int s=0;
      int e = m*n-1;
      int mid = (s+e)/2;
      while(s<=e){
          mid = (s+e)/2;
          int row = mid / n ;
          int col = mid % n;
          if(matrix[row][col]==target)return true;
          else if(matrix[row][col] > target) e = mid-1;
          else s = mid+1;
      }
      return false;
    }
};