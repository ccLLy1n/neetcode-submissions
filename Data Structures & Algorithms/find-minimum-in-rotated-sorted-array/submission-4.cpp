class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0;
        int j = nums.size() - 1;

        while(i<=j)
        {       
            if(i == j){
                return nums[i];
            }
            int mid = i+(j-i)/2;
            if(nums[mid] >= nums[j]){
                i = mid+1;
            }
            else if(nums[mid] < nums[j]){
                j = mid;
            }

        }
    }
};
