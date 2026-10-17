class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int last_row = matrix.size() - 1;
        vector<int> last_row_vec = matrix[last_row];
        if(target < matrix[0][0] || target > matrix[last_row][last_row_vec.size()-1])
        {
            return false;
        }
        vector<int> row_first;
        for(int i=0;i<matrix.size();i++)
        {
            row_first.push_back(matrix[i][0]);
        }
        int i = 0;
        int j = matrix.size() - 1;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(row_first[mid] > target){
                j = mid-1;
            }
            else if(row_first[mid] < target){
                i = mid+1;
            }
            else{
                return true;
            }
        }
        vector<int> target_row = matrix[i-1];
        i = 0;
        j = target_row.size() - 1;
        while(i<=j)
        {
            int mid = (i+j)/2;
            if(target_row[mid] > target){
                j = mid-1;
            }
            else if(target_row[mid] < target){
                i = mid+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
