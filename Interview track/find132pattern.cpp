class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        vector<int> memo(nums.size());
        stack<int> st;
        memo[0] = num[0];
        
        for(int i = 1; i < nums.size(); i++){
            memo[i] = min(memo[i-1], nums[i]);
        }
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] > memo[i]){
                while(!st.empty() && st.top() <= memo[i]){
                    st.pop();
                }
                    
                if(!st.empty() && st.top() < nums[i])
                    return true;
                
                st.push(nums[i]);
            }
        }
        
        return false;
    }
};
