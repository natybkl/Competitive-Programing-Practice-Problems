class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        unordered_map<int, vector<int>> graph;
        vector<int> incoming(n + 1, 0);
        vector<int> timeToFinish(n + 1, INT_MIN);
        
        for(auto& relation: relations){
            graph[relation[0]].push_back(relation[1]);
            incoming[relation[1]]++;
        }
        
        queue<int> q;
        for(int i = 0; i < n; i++){
            if(!incoming[i+1]){
                q.push(i+1);
                timeToFinish[i+1] = time[i];
            }     
        }
        
        while(!q.empty()){
            int i = q.front();
            q.pop();
            
           // cout << "i: "<< i << endl;
            for(int& ii: graph[i]){
                //cout << ii << " "; 
                timeToFinish[ii] = max(timeToFinish[ii], timeToFinish[i] + time[ii - 1]);
                if(--incoming[ii] == 0)
                    q.push(ii);
            }
            
           // cout << endl;
        }
        
        return *max_element(timeToFinish.begin(), timeToFinish.end());
    }
};
