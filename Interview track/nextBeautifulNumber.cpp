class Solution {
public:
    int nextBeautifulNumber(int n) {
        if(!n)
            return 1;
        
        unordered_map<int, vector<int>> um = {
        {1, {1}},
        {2, {22}},
        {3, {122, 333}},
        {4, {1333, 4444}},
        {5 , {14444, 22333, 55555}},
        {6 , {122333, 155555, 224444, 666666}},
        {7, {1224444}}
    };
    
    int cnt = 0, tmp = n;
    while(tmp){
        tmp /= 10;
        cnt++;
    }
    
    if(n >= *(um[cnt].end() - 1)){
        return um[cnt + 1][0];
    }
        
        
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> vis;
    for(int& i: um[cnt]){
        pq.push(i);
        vis.insert(i);
    }
        
        
    while(!pq.empty()){
        int i = pq.top();
        pq.pop();
        
        vis.insert(i);
        
        if(i > n){
           return i;
        }
            
            
        string s = to_string(i);
       // next_permutation(s.begin(), s.end());
        next_permutation(s.begin(), s.end());
        i = stoi(s);
        if(vis.find(i) == vis.end())
                pq.push(i);
    }
    
    return -1;
    
    }
};
