class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            if(nums[mid] == target){return mid;}
            // mid > target && target > j  -> 往左找 j = mid - 1; 
            // mid > target && target < j  -> 往右找 i = mid + 1;
            // mid < target && -> 往右找 -> i = mid + 1;
            // return 找到 or i>j return -1;
            if((nums[mid] > target) && (target > nums[j]) || (nums[mid] < target)){
                i = mid+1;
            }
            else{
                j = mid-1;    
            }
        }
        return -1;

    }
};
