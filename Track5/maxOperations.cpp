class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            int comp = k - nums[i];
            if(seen[comp]) {
                ans++; 
                seen[comp]--;
            } else{
                seen[nums[i]]++;
            }
        }
        
        return ans;
    }
};
