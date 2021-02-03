class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        if(words.size() == 1 ) return words;
      
        priority_queue<int> pq;
        unordered_map<pair<string,int>,int> um;
        vector<string> res;
       
        for(string s:words)
            um.insert(make_pair({s,s.size()},i++));
        
        for(auto a:um)
            pq.push(a.second); 
        
        string val;
        while(k != 0) {
            auto it=um.begin();
            for(auto a:um) {
                if(a.second == pq.top()) {
                    val=a.first;
                    um.erase(it);
                    break;
                }
               it++; 
            }
            res.push_back(val);
            pq.pop();
            k--;
        }
        
        return res;
        
    }
};
