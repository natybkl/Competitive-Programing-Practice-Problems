
// simple math solution
class Solution {
public:
    void solve(int& ans, int count){
	    if(count < 3) 
 		return;
	    ans += ((count - 3 + 2)*(count - 3 + 1)) / 2;
    }
    
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) 
            return 0;
        int ans = 0, i = 0, diff = nums[0] - nums[1], count = 1;
        
        while(i + 1 < nums.size()){
            if(nums[i] - nums[i + 1] != diff || i + 2 == nums.size()){
                if(nums[i] - nums[i + 1] == diff) count++;
	        solve(ans, count);
	        count = 1;
                diff = nums[i] - nums[i + 1];
                if(i + 2 == nums.size()) break;
            } else {
                count++;
                i++;
            }    
       }
	    
        return ans;
    }
};


//dp solution
class Solution{
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3) 
            return 0;
     
        vector<int> dp(nums.size());
        int  res = 0;
        for(int i = 2; i < nums.size(); i++){
	      if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2])
			dp[i] = dp[i-1] + 1; 
              res += dp[i];
        }
	    
        return  res;
   }    
};
