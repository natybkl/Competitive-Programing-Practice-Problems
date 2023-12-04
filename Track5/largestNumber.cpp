class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](const int& i1, const int& i2){
            return to_string(i1) + to_string(i2) > to_string(i2) + to_string(i1); 
        });
        
        string ans = "";
        for(int num:nums){
            ans += to_string(num);
        }
        
        return ans[0] == '0' ? "0" : ans;
    }
};
