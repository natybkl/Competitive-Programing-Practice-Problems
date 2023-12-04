class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
         multiset<int> m;
         int i = 0, j = 0;
         while(j < nums.size()){
             m.insert(nums[j]);
             if(*m.rbegin() - *m.begin() > limit){
                 m.erase(m.find(nums[i++]));
             }
             
             j++;
         }
        
         return j - i;
    }
};

/*  
    [10,1,2,4,7,2] limit = 5
    
    2,4,7,2
    
    4,2,2,2,4,4,2,2   l = 0
    
    2,2

*/
