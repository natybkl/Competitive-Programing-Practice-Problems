class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> cnt;
        vector<int> ans;
        for(int& num:nums){
            cnt[num]++;
        }
        
        for(auto& [val, freq]:cnt){
            if(freq > nums.size()/3) ans.push_back(val);
        }
        
        return ans;
    }
};
