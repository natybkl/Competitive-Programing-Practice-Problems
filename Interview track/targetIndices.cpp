class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0, freq = 0;
        vector<int> ans = {};
        for(int& num:nums){
            if(num < target) smaller++;
            if(num == target) freq++;
        }
        
        while(freq--){
            ans.push_back(smaller++);
        }
        
        return ans;
    }
};
