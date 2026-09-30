class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_hash;
        unordered_map<char, int> t_hash;
        int sl = s.size();
        int tl = t.size();
        if (sl != tl){
            return false;
        }
        for(int i=0; i<sl; i++){
            char ss = s[i];
            s_hash[ss]++;
        }
        for(int i=0; i<tl; i++){
            char tt = t[i];
            t_hash[tt]++;
        }
        return s_hash == t_hash;
    }
};
