
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        
    int count=0; 
        
   if(nums.size()<=2){
       
     return true;  
       
   }
      
   if(nums[0]>nums[1]){
       
    count++;   
       
       
   }     
        
       for(int i=1; i<nums.size()-1; i++){
           
     if(nums[i]>nums[i+1]){
         
    if(nums[i-1]nums[i+1]){
        
       nums[i+1]=nums[i];
        
    }
         
     }
           
      if(count==1){
          
        return  false; 
          
          
      }
           
      ++count;     
     }      
       
      return true;  
        
    }
};
