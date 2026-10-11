class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i=0;i<len-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1]){continue;}
            int k = i+1;
            int j = len-1;
            while(k<j)
            {
                if(nums[i]+nums[k]+nums[j]==0){
                    ans.push_back({nums[i], nums[k], nums[j]});
                    while(k<j)
                    {
                        if(nums[k]==nums[k+1]){k++;continue;}
                        if(nums[j]==nums[j-1]){j--;continue;}
                        break;
                    }
                    k++;
                    continue;
                }
                if(nums[i]+nums[k]+nums[j]>0){
                    j--;
                    continue;
                }
                if(nums[i]+nums[k]+nums[j]<0){
                    k++;
                    continue;
                }
            }
        }
        return ans;
    }
};
