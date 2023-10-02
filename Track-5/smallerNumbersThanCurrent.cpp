class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        multiset<int> s(nums.begin(), nums.end());
        vector<int> sv(s.begin(), s.end());
        vector<int> ans;
        for(int& i:nums){
            ans.push_back(find(sv.begin(), sv.end(), i) - sv.begin());
        }
        
        return ans;
    }
};
