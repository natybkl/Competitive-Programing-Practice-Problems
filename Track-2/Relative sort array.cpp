class Solution {
public:
   vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
         //sort(arr1.begin(),arr1.end());
         int maxval=*max_element(arr1.begin(),arr1.end());
         vector<int> count(maxval+1,0);
         vector<int> result1;
         vector<int> result2;
         int j=0,x=0; 
         bool foundmatch=false;
         
       while(j<arr2.size()) {
        for(int i=0; i<arr1.size(); i++) {
            
             if(arr1[i]==arr2[j])  {
                    
                   count[arr2[j]]++; 
                   //arr1.erase(arr1.begin()+i);
                }
                  
        } 
       
       j++;
        
       }
       
       
        for(int i=0; i<count.size(); i++) {
        
              
            for(int j=0; j<count[i]; j++) {
         
               foundmatch=false;
               if(i==arr2[x]){  result1.push_back(i); foundmatch=true; } else { break; }
         
           }   
           
          if(foundmatch=true){ x++; }
            
       }       
       
         
       
     
       
        return result1;
       
       
    }
};
