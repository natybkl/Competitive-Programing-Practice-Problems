class Solution {
public:
    int trap(vector<int>& height){
        int n = height.size();
        vector<int> res(n);
        vector<int> leftMax = height;
        vector<int> rightMax = height;
        
        for(int i = n - 2; i >= 0; i--){
            leftMax[i] = max(height[i], leftMax[i + 1]);
        }
        
    
        for(int i = 1; i < n; i++){
            rightMax[i] = max(height[i], rightMax[i - 1]);
        }
        
        
        for(int i = 1; i < n - 1; i++){
            res[i] = abs(min(leftMax[i], rightMax[i]) - height[i]);
        }
        
        
        
        return accumulate(res.begin(), res.end(), 0);
    }
};


 
