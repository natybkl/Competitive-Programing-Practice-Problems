class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i = n%2 + 1; i < nums.size(); i+=2){
            swap(nums[i], nums[i-1]);
        }
        
        return nums;
    }
};

