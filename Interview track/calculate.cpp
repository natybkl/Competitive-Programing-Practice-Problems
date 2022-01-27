class Solution {
public:
    int calculate(string s) {
        char op = '+';
        vector<int> stk;
        int tmp = 0;
        
        for(int i = 0; i < s.size(); i++){
            while(i < s.size() and isdigit(s[i])){
                tmp = tmp*10 + (s[i] - '0');
                // cout << "here" << endl;
                i++;
            }
                
            //cout << tmp << endl;
            if(i + 1 == s.size() or (!isspace(s[i]) and !isdigit(s[i]))){
                if(op == '+') stk.push_back(tmp);
                if(op == '-') stk.push_back(-tmp);
                if(op == '*' or op == '/'){
                    int val = stk.back();
                    stk.pop_back();
                    //cout << val << " " << tmp << endl; 
                    if(op == '*') stk.push_back(val*tmp);
                    if(op == '/') stk.push_back(val/tmp);
                }
                
                op = s[i];
                tmp = 0;
            }
        }
        
        //for(int& i:stk) cout << i << " ";
        return accumulate(stk.begin(), stk.end(), 0);
    }
};
