class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<matrix[i][j]<<" ";
                arr.push_back(matrix[i][j]);
            }
        }
       
        int s =0;
        int e = arr.size();

        while(s<e){
            int mid = (s + e )/2;
            if(arr[mid] == target)return 1;
            else if(arr[mid] > target)e = mid;
            else s = mid+1;
        }
        if(matrix[0][0] == target)return 1;
        return 0;
    }
};