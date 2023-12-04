class Solution {
public:
    
    // extract a valid elememt number from the formula
    int eleNum(string& formula, int& idx)
    {
        int tmp = idx;
        while(idx < formula.size() && isdigit(formula[idx])) {
            ++idx;
        }
        
        if(idx != tmp) 
            return  stoi(formula.substr(tmp, idx - tmp));
        else 
            return 1;
    }
    
    
    //extracts a valid element name from the formula
    string eleName(string& formula, int& idx)
    {
        int tmp = idx;
        idx++;
        //bool found = false;
        while(idx < formula.size() && islower(formula[idx])){
            idx++;
        }
        
        return formula.substr(tmp, idx - tmp);
    }
    
    void parase(string& formula, int& idx, unordered_map<string,int>& um){
        //reaches end of a string : base case
        if(idx == formula.size())
            return;
            
        if(formula[idx] == '(') { 
            unordered_map<string, int> _um;
            parase(formula, ++idx, _um);
            int val = eleNum(formula, idx);  
            for(auto& ele : _um){
                um[ele.first] += ele.second*val;
            }
            
            return parase(formula, idx, um);
            
        } else if(formula[idx] ==')') {
            idx++;
            return; 
        } else {
            string s = eleName(formula, idx);
            um[s] += eleNum(formula, idx);
            return parase(formula, idx, um);
        }
    }
    
    string countOfAtoms(string formula) {
        unordered_map<string, int> um;
        string res;
        int idx = 0;
        
        parase(formula, idx , um);
        map<string, int> _um(um.begin(), um.end());
        
        for(auto& ele : _um){
            res += ele.first;
            if(ele.second != 1)
                res += to_string(ele.second); 
        }
        
        return res;
    }
};
