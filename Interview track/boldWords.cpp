#include<bits/stdc++.h>
#define vv vector<vector<int>>
using namespace std;


class Solution {
public:
    /**
     * @param words: the words
     * @param S: the string
     * @return: the string with least number of tags
     */
    string boldWords(vector<string> &words, string &S) {
        vector<bool> found(S.size());
        for(string word:words){
            int i = 0;
            while(i <= S.size() - word.size()) {
                auto loc = S.find(word, i);
                if(loc != size_t(-1)){
                    fill(found.begin() + loc, found.begin() + loc + word.size(), 1);
                } else{
                    break;
                }
                
                i = loc + 1;
            }
        }

//         for(char c:S)
//             cout << c << " ";
//         cout << endl;
//         for(bool b: found)
//             cout << b << " ";

//         return "";
          string res = "";
          
          if(found[0]) res += "<b>";
          for(int i = 0; i < S.size(); i++)
          {
              res += S[i];
              if(i == S.size() - 1) break;
              if(!found[i] && found[i + 1]) res += "<b>";
              if(found[i] && !found[i + 1]) res += "</b>";
          }
        
          if(found.back()) res += "</b>";
        
          return res;
    }
};

int main(){
    Solution* sol = new Solution();
    vector<string> words{"bcccaeb","b","eedcbda","aeebebebd","ccd","eabbbdcde","deaaea","aea","accebbb","d"};
    string S = "ceaaabbbedabbecbcced";
    cout << "\n" << sol->boldWords(words, S);
}
