class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string,int> um;
        int k;
        for(int i = 0; i < names.size(); i++){
            string s = names[i];
            if(um.find(s) == um.end())
                um[s] = 1;
            else {
                k = um[s];
                um[s] += 1;
                
                while(um.find(s + "(" + to_string(k) +  ")") != um.end()){
                   k++;
                }
                names[i] = s + "(" + to_string(k) + ")";
                um[names[i]] = 1;
            }
                
        }
        
        return names;
    }
};
