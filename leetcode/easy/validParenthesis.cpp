// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 
// Input: s = "()[]{}"
// Output: true

// Input: s = "(]"
// Output: false


class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int pos = 1;
        char prev;
        st.push(s[0]);
        while(pos<s.length()){
            if(!st.empty()){
                char curr = s[pos];
                char prev = st.top();
                if(curr == ')' and st.top() == '(')
                    st.pop();
                else if(curr == '}' and st.top() == '{')
                    st.pop();
                else if(curr == ']' and st.top() == '[')
                    st.pop();
                else{
                    st.push(s[pos]);
                }
            } else{
                st.push(s[pos]);
            }
            pos++;
        }
        

        if(st.empty()) return 1;
        
        return 0;
    }
};