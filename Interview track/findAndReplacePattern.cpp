class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        
        for(string word : words){
            unordered_map<char, char> pairs;
            unordered_set<char> usedVals;
            bool skip = false;
            
            for(int i = 0; i < word.size(); i++){
                
                if(pairs.find(word[i]) == pairs.end()){
                    if(usedVals.find(pattern[i]) == usedVals.end()){
                        usedVals.insert(pattern[i]);
                        pairs[word[i]] = pattern[i];
                    } else {
                        skip = true;
                        break;
                    }
                }else if(pairs[word[i]] == pattern[i]){
                    continue;
                } else {
                    skip = true;
                    break;
                }
                
            }
            
            if(skip) continue;
            res.push_back(word);
        }
        
        return res;
    }
};
