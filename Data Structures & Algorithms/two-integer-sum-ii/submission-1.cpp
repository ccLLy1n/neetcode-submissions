class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size();
        for(int i=0;i<j;i++)
        {
            int temp_sum = numbers[i] + numbers[j-1];
            if(temp_sum == target){
                return {i+1, j};
            }
            if(temp_sum > target){
                i--;
                j--;
            }
        }
    }
};
