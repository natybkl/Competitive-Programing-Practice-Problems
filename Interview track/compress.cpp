class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, n = chars.size();
        vector<char> res;
        while(i < n){
            char c = chars[i++];
            int cnt = 1;
            while(i < n && chars[i] == c) {
                i++; cnt++;
            }
               
            //cout << c << " " << cnt << endl;
            res.push_back(c);
            if(cnt > 1) {
                string str = to_string(cnt);
                for(char c:str) res.push_back(c);
            }
            
        }
        
        chars = res;
        return res.size();
    }
};
