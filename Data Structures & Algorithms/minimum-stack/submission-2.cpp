class MinStack {

private:
    stack<int> stk;
    stack<int> minimum;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
        if(minimum.empty()){
            minimum.push(val);
        }
        else{
            if(val <= minimum.top()){
                minimum.push(val); // new min
            }
        }
    }
    
    void pop() {
        if(stk.top() == minimum.top()){
            minimum.pop();
        }
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};
