class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(),
			cols = matrix[0].size(),
            r = 0, c = cols - 1;
            int mid = (r+c)/2;
		while(r <rows && c >=0){
            // mid = (row+col)/2;
            int s = 0;
            int e = c;
            while(s<=e){
              mid = (s+e)/2;
              if(matrix[r][mid]==target)return true;
              else if(matrix[r][mid]>target) e=mid-1;
              else s = mid+1;
            }
            r++;
        }
        return false;
    }
};