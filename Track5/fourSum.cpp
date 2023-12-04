class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        int a, b, c, d, k, l, dt, dd;
        for(int i = 0; i < nums.size() - 3; i++){
            a = nums[i];
            if(i-1 >= 0 && nums[i] == nums[i-1]) continue;
            dt = target - a;
            for(int j = i+1;j<n-2;j++){
                b = nums[j];
                if(j-1 > i &&nums[j]==nums[j-1]) continue;
                dd = dt - b;
                k = j+1, l = n-1;
                while(k<l){
                    c = nums[k];
                    d = nums[l];
                    if(c+d==dd){
                        res.push_back({a, b, c, d});
                        k++, l--;
                        while(k<l&&nums[k]==c) k++;
                        while(k<l&&nums[l]==d) l--;
                    }
                    else if(c+d < dd) k++;
                    else l--;
                    
                }
            }
        }
        return res;
    }
};
