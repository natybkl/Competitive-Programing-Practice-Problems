class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](string& s1, string& s2){
            return s1.size() == s2.size() ? s1 > s2 : s1.size() > s2.size();
        });
        
        return nums[k-1];
    }
};
