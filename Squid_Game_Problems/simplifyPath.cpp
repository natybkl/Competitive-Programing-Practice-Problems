class Solution {
public:
    string simplifyPath(string path) {
        string result = "";
        stringstream ss(path);
        string loc;
        deque<string> st;
        
        while(getline(ss,loc,'/')){
            // cout << loc << ":";
            if(loc == "" or loc == ".") {
                continue;
            }
            
            if(loc == "..") {
                result = result.substr(0, result.find_last_of('/'));
                continue;
            }
            
            result.push_back('/');
            result += loc;
        }
        
        
        return result.empty() ? "/" : result;
    }
};
