class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double,pair<int,int>>> maxheap;
        for(vector<int>& v : classes){
            double nextRatio = ((double)(v[0])+1)/((double)(v[1])+1);
            double currRatio = (double)(v[0])/(double)(v[1]);
            maxheap.push({nextRatio - currRatio,{v[0], v[1]}});
        }
        
        double sz = maxheap.size();
        while(extraStudents){
            auto node = maxheap.top();
            maxheap.pop();
            
            double nextRatio = ((node.second.first) + 2.0) / (node.second.second + 2.0);
            double currRatio= (node.second.first + 1.0) / (node.second.second + 1.0);
            maxheap.push({nextRatio - currRatio, {node.second.first + 1,node.second.second + 1}});

            extraStudents--; 
        }
        
       
        double avg = 0.0;
        while(!maxheap.empty()){
            auto node = maxheap.top();
            maxheap.pop();
            avg += 1.0*node.second.first / node.second.second;
        }
        return avg/sz;
    }
};
