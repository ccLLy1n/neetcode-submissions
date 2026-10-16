class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int i = 0;
        while(i < s.size())
        {
            char c = s[i];
            if(stk.empty()){
                stk.push(c);
                i++;
                continue;
            }
            if(c == ')' && stk.top() == '('){
                stk.pop();
            }
            else if(c == '}' && stk.top() == '{'){
                stk.pop();
            }    
            else if(c == ']' && stk.top() == '['){
                stk.pop();
            }
            else{
                stk.push(c);
            }
            i++;
        }
        return (stk.empty());
    }
};
