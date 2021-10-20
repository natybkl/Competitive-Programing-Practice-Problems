class Solution {
   
public:
    void fillss(vector<vector<int>>& ss,vector<int>& nums,vector<int> res,int idx){
        if(idx == nums.size()){
            ss.push_back(res);
            return;
        }
        
        fillss(ss, nums, res, idx + 1);
        res.push_back(nums[idx]);
        fillss(ss, nums, res, idx + 1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ss;
        fillss(ss,nums,{},0);
        return ss;
    }
};
