class Solution {
public:
    bool is_art(vector<int>& subarray){
        int diff = subarray[1] - subarray[0];
        for(int i = 1; i < subarray.size(); i++){
            if(subarray[i] - subarray[i -1] != diff) return false;
        }
        
        return 1;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i = 0; i < l.size(); i++){
            vector<int> tmp;
            for(int s = l[i]; s <= r[i]; s++){
                tmp.push_back(nums[s]);
            }
            
            sort(tmp.begin(), tmp.end());
            ans.push_back(is_art(tmp));
        }
        
        return ans;
    }
};
