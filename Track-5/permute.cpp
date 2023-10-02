class Solution {
public:
    void fill(vector<vector<int>>& ans, vector<int>& nums, int idx, int n){
        if(idx == n - 1){
            ans.push_back(nums);
            return;
        }    
        
        for(int i = idx; i < n; i++){
            swap(nums[i], nums[idx]);
            fill(ans, nums, idx + 1, n);
            swap(nums[i], nums[idx]);
        }
        
        return;
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        fill(ans, nums, 0, nums.size());
        return ans;
    }
};
