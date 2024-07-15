class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;
        unordered_map<int, int> map;

        for(int i =0;i<arr1.size() ;i++ ){
            map[arr1[i]]++;
        }
       
        for(int i =0;i< arr2.size(); i++){
            if(map.find(arr2[i]) != map.end()){
               int size = map[arr2[i]];
               for(int j =0;j<size; j++){
                result.push_back(arr2[i]);
               }
               map[arr2[i]] =0;
            }
        }
        vector<int>temp;
        for(auto it : map){
            if(it.second > 0){ 
                int size = it.second;
                for(int i =0;i<size; i++){
                    temp.push_back(it.first);
                }
            }  
        }
        sort(temp.begin(), temp.end());
        for(int i =0;i< temp.size(); i++){
                    result.push_back(temp[i]);
        }
        return result; 
    }
};