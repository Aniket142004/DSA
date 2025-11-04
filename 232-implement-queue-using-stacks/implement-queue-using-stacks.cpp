class MyQueue {
public:
stack<int>st; // the main stack 
stack<int>hel; // the helper stack 
    MyQueue() {
        // default constructor 
    }
    
    void push(int x) { // 0(1)
        st.push(x); // push the element 
    }
    
    int pop() {
        // display the bottom element 
        while(st.size()>0){
            int x= st.top();
            hel.push(x);
            st.pop();
        }
        int ans = hel.top();
        hel.pop(); // to pop the bottom elemnt of actual queue 
          while(hel.size()>0){
            int x= hel.top();
            st.push(x);
            hel.pop();
        }
        return ans ;
    }
    
    int peek() {
          while(st.size()>0){
            int x= st.top();
            hel.push(x);
            st.pop();
        }
        int ans = hel.top();
        // we have to display the original one so we dont have to pop 
          while(hel.size()>0){
            int x= hel.top();
            st.push(x);
            hel.pop();
        }
        return ans ;
    }
    
    bool empty() {
        if (st.size()==0) return true ;
        else return false ;
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