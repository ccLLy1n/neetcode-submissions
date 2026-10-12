class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1_len = s1.size();
        int s2_len = s2.size();
        unordered_map<char, int> s1_table;
        unordered_map<char, int> s2_table;
        for(int i=0;i<s1_len;i++)
        {
            s1_table[s1[i]]++;
        }
        for(int j=0;j<s1_len;j++)
            {
                s2_table[s2[j]]++;
            }
        if(s1_table == s2_table){
                return true;
            }

        for(int i=s1_len;i<s2_len;i++)
        {
            s2_table[s2[i]]++;
            s2_table[s2[i-s1_len]]--;
            if(s2_table[s2[i-s1_len]] == 0){s2_table.erase(s2[i-s1_len]);}
            if(s1_table == s2_table){
                return true;
            }
        }
        return false;
    }
};
