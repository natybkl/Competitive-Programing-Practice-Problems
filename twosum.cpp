class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
  vector<int> Sol;
  bool found=false;
  int i=0;
   
    while(i<nums.size() && found!=true)  {  
    for(int j=0;j<nums.size(); j++){
     if(nums[i]+nums[j]==target && i!=j ){  
    Sol.push_back(i);
    Sol.push_back(j);
    found=true;}
    }  
        i++;
    }    
        return Sol;
    }
};


    
    
   
    