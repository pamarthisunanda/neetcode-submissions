class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // If opening bracket, push onto stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // If closing bracket
            else {
                // No opening bracket to match
                if (st.empty()) {
                    return false;
                }

                // Check if top of stack matches current closing bracket
                if ((ch == ')' && st.top() == '(') ||
                    (ch == '}' && st.top() == '{') ||
                    (ch == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        // Valid only if no unmatched opening brackets remain
        return st.empty();
    
    }
};
