class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size(), n = matrix.size();
        int start = 0, end = m*n-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            int index = matrix[mid/m][mid%m];
            
            if(target == index) return true;
            else if(target<index)   end = mid - 1;
            else    start = mid + 1;
        }
        return false;
    }
};