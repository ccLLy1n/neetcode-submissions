class Solution {
public:
    bool isPalindrome(string s) {
        // preprocess string s
        string use;
        for(int i=0;i<s.size();i++)
        {
            char c = s[i];
            if (isalnum(c)){ // is alpha or nuns isalnum()
                use.push_back(tolower(c)); // A -> a, tolower()
            }           
        }
        int len = use.size();
        int j = len-1;
        for(int i=0;i<len;i++)
        {
            if(i==j){
                return true;
            }
            if(i>j){
                return true;
            }
            if(use[i]==use[j]){
                j--;
                continue;
            }
            else{
                return false;
            }
        }
    }
};
