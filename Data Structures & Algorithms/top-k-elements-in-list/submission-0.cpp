class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map <int, int> nums_table;
        for(int i=0;i<len;i++){
            nums_table[nums[i]]++;
        }
        vector<vector<int>> table_pair;
        for(auto x:nums_table){
            table_pair.push_back({x.second, x.first});
        }
        sort(table_pair.begin(), table_pair.end(), greater<vector<int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(table_pair[i][1]);
        }
        return ans;
    }
};
