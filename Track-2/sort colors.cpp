class Solution {
public:
   
    void sortColors(vector<int>& nums) {
        
     unordered_map<int,int> um;
     int it=0;
     
     for(auto a:nums) {
      
      um[a]+=1;    
      it++;   
     }
    
     nums.clear();
        
     int arr[]={0,1,2}; 
     for(int i=0; i<3; i++){
         
     for(int j=0; j<um[arr[i]]; j++){
         
      nums.push_back(i);   
         
     }    
         
     }   
   
    }
};
