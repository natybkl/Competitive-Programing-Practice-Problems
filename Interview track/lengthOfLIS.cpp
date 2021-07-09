class Solution {
public:
    
    int solve(vector<int>&nums, vector<int>&arr,int idx){
          if(arr[idx] != 0)
             return arr[idx];
      
          int ans = 1;
          for(int i = idx+1; i < nums.size(); i++)
               if(nums[idx] < nums[i])
                   ans = max(ans, solve(nums, arr, i) + 1);
        
          return arr[idx] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int ans = 0;
        vector<int> arr(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++)
           if(arr[i] == 0) ans = max(ans, solve(nums, arr, i));

        return ans;
    }
};
