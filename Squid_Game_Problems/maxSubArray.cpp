class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int l = 0,r = 0, ans = INT_MIN, curr = 0;
        
        while(r < nums.size()){
           if(curr >= 0){
               curr += nums[r];
               r++;
               ans = max(ans, curr);
           } else{
               curr -= nums[l];
               l++;
           }
           
        }
        
        return ans;
    }
};
