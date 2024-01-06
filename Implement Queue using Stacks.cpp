class MyQueue {
    private:
    stack<int>pushstack;
    stack<int>popstack;
    
public:
    MyQueue() {
       
    }
    
    void push(int x) {
         pushstack.push(x);
    }
    
    int pop() {
        if(this->popstack.empty()){
            while(this->pushstack.empty() != true){
                int item= this->pushstack.top();
                this->pushstack.pop();
                this->popstack.push(item);
            }
        }
        int item= this->popstack.top();
        this->popstack.pop();
        return item;
        
    }
    
    int peek() {
        if(this->popstack.empty()){
            while(this->pushstack.empty() != true){
                int item= this->pushstack.top();
                this->pushstack.pop();
                this->popstack.push(item);
            }
        }
        return popstack.top();
    }
    
    bool empty() {
        return pushstack.empty() && popstack.empty();
    }
};

