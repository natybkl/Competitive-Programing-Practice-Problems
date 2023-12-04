class Solution {
public:
     
    int ladderLength(string beginWord, string endWord, vector<string>& wordList){
        queue<pair<string,int>> q;
        q.push({beginWord, 1});
        unordered_set<string> vis;
        unordered_set<string> words(wordList.begin(), wordList.end());
        
        //cout << *words.begin() << endl;
        while(!q.empty()){
            auto a = q.front();
            q.pop();
            
            if(a.first == endWord)
                return a.second;
            
            
            for(int i = 0; i < a.first.size(); i++){
                char tmp = a.first[i];
                //cout << a.first << endl;
                for(char c = 'a'; c <= 'z'; c++){
                    a.first[i] = c;
                    //cout << a.first << endl;
                  if(words.find(a.first) != words.end() && vis.find(a.first) == vis.end()){
                               q.push({a.first, a.second + 1});
                               words.erase(words.find(a.first));
                  }
                       
                }
                a.first[i] = tmp;
            }
            
            vis.insert(a.first);
        }
        
        return 0;
    }
};
