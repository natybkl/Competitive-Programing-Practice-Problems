class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
  vector<vector<int>> res; 
  unordered_multimap<double,vector<int>> um;    
  vector<double> distance;
        
  for(auto a:points) {
      
  double dis=sqrt((a[0]*a[0])+(a[1]*a[1]));
      
  distance.push_back(dis);
      
  um.emplace(dis,a);    
      
  }  
    
        
  sort(distance.begin(),distance. end());
  
        
  for(int i=0; i<K; i++) {
     
  auto itr=um.find(distance[i]);    
  res.push_back(itr->second);  
      
  um.erase(itr);
  }     
        
   return res;     
    }
};
