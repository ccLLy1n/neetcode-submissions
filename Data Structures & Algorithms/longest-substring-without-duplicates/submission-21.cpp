class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = s.size();
        int start = 0;
        int max = 0;
        unordered_map<char, int> table;
        for(int i=0;i<l;i++)
        {
            char a = s[i];
            if(table.count(a)){
                if(table[a]<start){
                    table[a] = i;
                }
                else{
                    int du = table[a];
                    start = du + 1;
                    table[a] = i;

                }
            }
            else{
                table[a] = i;
            }
            int tmp_max = i - start + 1;
            if(max<tmp_max){max = tmp_max;}
        }
        return max;
    }
};
