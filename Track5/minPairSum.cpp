class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = INT_MIN, l = 0, r = nums.size() - 1;
        while(l < r){
            sum = max(sum, nums[l++] + nums[r--]);
        }
        
        return sum;
    }
};
