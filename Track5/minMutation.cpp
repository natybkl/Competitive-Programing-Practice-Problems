class Solution {
public:
    bool oneMut(string& s1, string& s2){
        int diff = 0;
        for(int i = 0; i < 8; i++){
            if(s1[i] != s2[i])
                diff++;
            
            if(diff >= 2)
                return false;
        }
        
        return diff == 1;
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        queue<pair<string, int>> q;
        q.push({start, 0});
        unordered_set<string> vis;
        
        while(!q.empty()){
            auto s = q.front();
            q.pop();
            
            cout << s.second << ": " << s.first << endl; 
            if(s.first == end)
                return s.second;
            
            for(string& gene: bank){
                if(oneMut(gene, s.first) && vis.find(gene) == vis.end())
                    q.push({gene, s.second + 1});
            }
        
            vis.insert(s.first);
        }
        
        return -1;
    }
};
