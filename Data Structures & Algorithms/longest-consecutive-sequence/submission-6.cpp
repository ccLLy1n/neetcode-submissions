class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> ht(nums.begin(), nums.end());
        int max = 0;
        for(int i=0;i<nums.size();i++){
            int init = nums[i];
            if(ht.count(nums[i]-1) == true){
                continue;
            } // if nums[i]-1 exist == nums[i] isn't initial element.
            int counter = 1;
            while (true){
                if(ht.count(init+1) == true){
                    init++;
                    counter++;
                    continue;                     
                }
                break;
            }
            if(max < counter){
                max = counter;
            }

        }
        return max;
    }
};
