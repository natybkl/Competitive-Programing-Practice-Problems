class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0, cur = 0;
        for(int i = 0; i < nums.size(); i++){
            int tmp = max(cur, prev + nums[i]);
            prev = cur;
            cur = tmp;
        }
        
        return cur;
    }
};
