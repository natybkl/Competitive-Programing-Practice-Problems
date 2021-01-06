class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        
            vector<vector<int>> coord;
            vector<int> dis;
            vector<int> index;
            int distance,itr=0,limit=1;
        
        for(int i=0; i<R; i++) {
            
            for(int j=0; j<C; j++){
                
                 vector<int> v1;
                 
                 v1.push_back(i); 
                 v1.push_back(j);
                
                 distance=abs(i-r0)+abs(j-c0);
                
                 
                 dis.push_back(distance);
                 coord.push_back(v1);
                     
            }  
        }
        
        
         while(itr<dis.size()) {
       
       for(int j=0; j<dis.size()-limit; j++)
       
       {
           
           if(dis[j]>dis[j+1]) { swap(dis[j],dis[j+1]);  swap(coord[j],coord[j+1]); } 
                               
       }
       
             itr++; limit++; 
       
       }
       
       
       
         return coord;
       
         }
             
             
       
        
        
        
    
};
        
        
        
        
        
       
        
        
        
        
        
        
        
        
        
        
        
