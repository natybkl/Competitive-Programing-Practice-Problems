class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans = 0;
        for(int& num:nums){
            ans += count[num]++;
        }
        
        return ans;
    }
};
