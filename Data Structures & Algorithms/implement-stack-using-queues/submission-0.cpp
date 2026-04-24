class MyStack {
public:


    std::queue<int> q1;
    std:: queue<int> q2;
    MyStack() {
        
    }
    
    void push(int x) 
    {
        q1.push(x);
        while(!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1,q2);
    }
    
    int pop() 
    {
       int a = q2.front();
       q2.pop();
       return a;
    }
    
    int top() 
    {
        int a = q2.front();
        return a;
    }
    
    bool empty() 
    {
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