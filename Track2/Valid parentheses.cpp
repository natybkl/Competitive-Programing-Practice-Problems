class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        
        unordered_map<char,char> uomap = {
            {')', '('},
            {']', '['},  
            {'}', '{'}  
        };


        if (s.length() >= 1 && (s[0] == ')' || s[0] == ']' || s[0] == '}')) {
            return false;
        }

        for (int i=0; i<s.length(); i++ ) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
          
                if (st.empty() || uomap[s[i]] != st.top()) {
                    return false;
                }
                st.pop();
            }
        }

        return st.empty();
    }
};
