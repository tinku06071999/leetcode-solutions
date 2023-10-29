class MyQueue {
public:
   stack<int>st1;
   stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        
        while(!st1.empty()){
            int k = st1.top();
            st1.pop();
            st2.push(k);
        }
        st1.push(x);
        while(!st2.empty()){
            int k = st2.top();
            st2.pop();
            st1.push(k);
        }

    }
    
    int pop() {
        int k = st1.top();
        st1.pop();
        return k;
    }
    
    int peek() {
        int k = st1.top();
        return k;
    }
    
    bool empty() {
        return st1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */