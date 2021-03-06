class Solution{
public:  
   vector<vector<int>> highestPeak(vector<vector<int>>& isWater ){
          vector<pair<int, int>>  dirs={{1,0},{-1,0},{0,1},{0,-1}}; 
          deque<pair<int, int>> dq;
          int row=isWater. size();
          int col=isWater[0]. size();
          vector<vector<bool>> visited(row, vector<bool> (col, false));
    
          for(int i=0; i<row; i++) {
              for(int j=0; j<col; j++) {
                     if(isWater[i][j]==1) {
                         visited[i][j]=true;
                         isWater[i][j]=0;
                         dq.push_back({i, j});
                  }
             }
         }    
       
        while(!dq.empty()) {
            pair<int, int> p=dq. front();
            dq. pop_front();
            int px=p. first;
            int py=p. second;

             for(int i=0; i<4; i++){
                  int x=px+dirs[i].first;
                  int y=py+dirs[i].second;
     
                  if(x<0 || y<0 || x==row || y==col || visited[x][y]==true)
                           continue;
                   visited[x][y]=true;
                   isWater[x][y]=isWater[px][py]+1;
                   dq.push_back({x, y});
                }
            }
    
         return isWater;
    }
    
};
