class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> vals;
        for(string& token:tokens){
            if(token == "+" or token == "-" or token == "/" or token == "*"){ 
                int val1 = vals.back(); vals.pop_back();
                int val2 = vals.back(); vals.pop_back();
                if(token == "+")
                    vals.push_back(val1 + val2);
                else if(token == "-")
                    vals.push_back(val2 - val1);
                else if(token == "/")
                    vals.push_back(val2/val1);
                else
                    vals.push_back(val1*val2);
            } else {
                vals.push_back(stoi(token));
            }   
        }
        
        return vals.back();
    }
};
