//simple O(n) linear search solution 
class Solution {
public:
    bool search(vector<int>& nums, int target) {
      for(int i = 0; i < nums.size(); i++) {
       if(nums[i] == target)   
        return true;  
      }
        return false;
   }
};

//worse case O(n) binary search solution
class Solution {
public:
    bool search(vector<int>& nums, int target) {
          int pivot=0;  
          for(int i=0; i<nums.size()-1; i++)  {
                 if((nums[i] == target) || (nums[i+1] == target))
                      return true;
                 if(nums[i+1]<nums[i]) {
                      pivot++;
                      break; 
                  } 
               pivot++;     
            }
    
            int l=pivot,r=nums.size()-1;           
            while(l<=r) {
                 int mid=l+((r-l)/2);
                 if(nums[mid]==target)
                    return true;
                 if(nums[mid]>target) {
                    r=mid-1;
                 } else {
                    l=mid+1;
                  }   
             }              
        return false;       
    }
};
