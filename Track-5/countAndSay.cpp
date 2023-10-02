class Solution {
public:
    string compress(string& chars) {
        int i = 0, n = chars.size();
        string res = "";
        while(i < n){
            char c = chars[i++];
            int cnt = 1;
            while(i < n && chars[i] == c) {
                i++; cnt++;
            }
               
            res = (res + to_string(cnt) + c);
        }
        
        return res;
    }
    
    string countAndSay(int n) {
        string res = "1";
        
        for(int i = 1; i < n; i++){
            res = compress(res);
        }
        
        return res;
    }
};
