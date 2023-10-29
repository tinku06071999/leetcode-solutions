class MyStack {
public:
    queue<int>q1;
    queue<int>q2;
   
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        while(!q2.empty()){
            int k = q2.front();
            q1.push(k);
            q2.pop();
        }
        while(!q1.empty()){
            int k = q1.front();
            q2.push(k);
            q1.pop();
        }
    }
    
    int pop() {
        int k = q2.front();
        q2.pop();
       return k;

    }
    
    int top() {
        return q2.front();
    }
    
    bool empty() {
        return q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */