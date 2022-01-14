int leastInterval(vector<char>& tasks, int n){
        priority_queue<int> pq;
        unordered_map<char, int> count;
        int total = 0;
        
        for(char& task:tasks) count[task]++;
        
        for(auto& a:count) pq.push(a.second);
        
        while(!pq.empty()){
            vector<int> tmp;
            int time = 0;
            for(int i = 0; i <= n && !pq.empty(); i++){
                if(!pq.empty()){
                    tmp.push_back(pq.top());
                    pq.pop();
                    time++;
                }
            }
            
            for(int& t:tmp){
                if(--t) pq.push(t);    
            }
            
            total += !pq.empty() ? n + 1 : time;
        }
        
        return total;
    }
