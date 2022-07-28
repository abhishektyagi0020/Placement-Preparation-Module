//problem 1 Valid paarantheses leet code ************************************//


class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        st.push(s[0]);
        for(int i = 1; i<s.size(); i++){
            
            if( s[i] == ')' && !st.empty() && st.top() == '(' ) st.pop();
            else if( s[i] == '}' && !st.empty() && st.top() == '{' ) st.pop();
            else if( s[i] == ']' && !st.empty() && st.top() == '[' ) st.pop();
            
            else st.push(s[i]);
        }
        return st.empty();
    }
}

//***problem 2 Implement Queue using stack.cpp///
class MyQueue {
public:
   stack<int>st;
        stack<int>a;
    MyQueue() {

    }
    
    void push(int x) 
    {
        while(!st.empty())
        {
        int t=st.top();
        st.pop();
        a.push(t);
        }
        a.push(x);
        while(!a.empty())
        {
int t=a.top();
        a.pop();
        st.push(t);
        }
    }
    
    int pop() {
        int r=st.top();
        st.pop();
        return r;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
