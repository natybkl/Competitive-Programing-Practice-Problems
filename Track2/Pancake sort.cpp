class Solution {
	
public:
	
vector<int> pancakeSort(vector<int>& arr) {
        
      vector<int> v; 
        
        
      for(int i=0; i<arr.size(); i++)  {
      	
        int minval=min_element(arr.begin()+i, arr.end())-arr.begin();
  
        v.push_back(minval+1); 
          
        reverse(arr.begin()+i, minval+arr.begin());   
    
         bool sorted=is_sorted(arr.begin(),arr.end());
          
     if(sorted==true) {       
       
         break; 
        
    }       
      
    }
       
        return v;
        
    }
};

