class Solution {
public:
    string removeDuplicateLetters(string s) {
        int cnt[26] = {};
        int used[26] = {};
        for(char c: s)
            ++cnt[c-'a'];
        
        stack<char> st;
        for(char c:s){
            --cnt[c-'a'];
              if(used[c - 'a']++ > 0) continue;
              while(!st.empty() && st.top() > c && cnt[st.top()-'a'] > 0) {
                  used[st.top() - 'a'] = 0;
                  st.pop();
              }
            
              st.push(c);
        }
        
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
