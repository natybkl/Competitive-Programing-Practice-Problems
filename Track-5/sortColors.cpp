class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0, w = 0, b = nums.size() - 1;
        while(w <= b){
            if(nums[w] == 0) swap(nums[w++], nums[r++]);
            else if(nums[w] == 2) swap(nums[b--], nums[w]);
            else w++;
        } 
    }
};
