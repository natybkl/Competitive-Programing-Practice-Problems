class Solution {
public:
    vector<int> parent;
    int find(int x){
        return (parent[x] == x) ? x : parent[x] = find(parent[x]);   
    }
    
    void _union(int x, int y){
        int px = find(x);
        int py = find(y);
        
        parent[px] = py;    
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        priority_queue<vector<int>> pq;
        int tmp = 1, i = 0, res = 0;
        for(int i = 0; i <= n; i++)
            parent.push_back(i);
        
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                pq.push({-(abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1])), i + 1, j + 1});
            }
        }
        
        
        while(tmp < n){
            auto a = pq.top();
            pq.pop();
            
            if(find(a[1]) != find(a[2])){
                tmp++;
                res += -1*a[0];
                _union(a[1], a[2]);
            }
            
        }
        
        return  res;
    }
};
