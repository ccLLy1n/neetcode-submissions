class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int i = 0;
        while(i<tokens.size())
        {
            if(nums.size() < 2){
                nums.push(stoi(tokens[i]));
                i++;
                continue;                
            }
            if(tokens[i] == "+"){
                int first = nums.top();
                nums.pop();
                int second = nums.top();
                nums.pop();
                int result = second + first;
                nums.push(result);               
            }
            else if(tokens[i] == "-"){
                int first = nums.top();
                nums.pop();
                int second = nums.top();
                nums.pop();
                int result = second - first;
                nums.push(result);
            }
            else if(tokens[i] == "*"){
                int first = nums.top();
                nums.pop();
                int second = nums.top();
                nums.pop();
                int result = second * first;
                nums.push(result);
            }
            else if(tokens[i] == "/"){
                int first = nums.top();
                nums.pop();
                int second = nums.top();
                nums.pop();
                int result = second / first;
                nums.push(result);
            }
            else{
                nums.push(stoi(tokens[i]));
            }
            i++;
        }
        return nums.top();
    }
};
