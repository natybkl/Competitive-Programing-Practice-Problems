class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int, string> word_pos;
        stringstream ss(s);
        string word, ans = "";
        while(ss >> word){
            word_pos[word.back() - '0'] = word.substr(0, word.size() - 1);
        }
        
        
        for(int i = 1; i <= word_pos.size(); i++){
            ans += word_pos[i];
            if(i != word_pos.size()) ans += " ";
        }
        
        return ans;
    }
};
