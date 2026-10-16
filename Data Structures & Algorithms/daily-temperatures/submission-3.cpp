class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        vector<int> ans(temperatures.size(), 0);
        stack<int> stk;
        for(int i=0;i<len;i++)
        {
            while(!stk.empty() && (temperatures[i] > temperatures[stk.top()])) // stack 有元素且第i比前i-1熱
            {
                ans[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }
        return ans;
    }
};
