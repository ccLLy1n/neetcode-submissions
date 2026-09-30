class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int k = nums.size();
        for (int s=0; s<k-1; s++){
            for(int i=s+1; i<k; i++){
                if(nums[s]+nums[i] == target){
                    vector<int> ans;
                    ans.push_back(s);
                    ans.push_back(i);
                    return ans;
                }
            }
        }
    }
};
