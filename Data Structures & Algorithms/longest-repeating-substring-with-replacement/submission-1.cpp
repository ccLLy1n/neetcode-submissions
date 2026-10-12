class Solution {
public:
    int characterReplacement(string s, int k) {
        int len = s.size();
        int j = 0;
        int i = 0;
        int highest = 0;
        int max_length = 0;
        unordered_map<char, int> freq;
        while(j<len)
        {
            freq[s[j]]++;
            highest = max(highest, freq[s[j]]);
            while(j-i+1-highest > k) // 從left開始扣，扣到k有辦法替換
            {
                freq[s[i]]--;
                i++;
            }
            max_length = max(max_length, j-i+1);
            j++;
        }
        return max_length;
    }
};
