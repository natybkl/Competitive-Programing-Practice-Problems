#define pr pair<int, pair<int,int>>
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i,j;
        int y=matrix.size();
        int x=matrix[0].size();
        
        priority_queue<pr,vector<pr>,greater<pr>> pq;
        vector<vector<bool>> memo(y,vector<bool>(x,false));

        pq.push({matrix[0][0],{0,0}});
        auto a=pq.top();

        while(k){
            a=pq.top();
            pq.pop();
   
            i=a.second.first;
            j=a.second.second;

            //right
            if(j+1 < x && memo[i][j+1]==false){
                 pq.push({matrix[i][j+1],{i,j+1}});
                 memo[i][j+1]=true;   
            } 
  
            //down
            if(i+1 < y && memo[i+1][j]==false){
                 pq.push({matrix[i+1][j],{i+1,j}});
                 memo[i+1][j]=true;
            }

            k--;
        }
        
        return a.first;
    }
};
