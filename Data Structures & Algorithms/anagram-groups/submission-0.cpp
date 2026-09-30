class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> hash_table;
        int str_len = strs.size();
        for(int i=0; i<str_len; i++){
            string s = strs[i];
            sort(s.begin(), s.end());
            hash_table[s].push_back(strs[i]);
        }
        vector<vector<string>> mewmewparadise;
        for(auto x:hash_table){
            mewmewparadise.push_back(x.second);
        }
        return mewmewparadise;              
    }
};
