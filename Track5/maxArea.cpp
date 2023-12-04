class Solution {
public:
    int maxArea(vector<int>& height) {
        int _max = 0, n = height.size();
        int l = 0, r = n - 1;
        while(l < r){
            int cur = std::min(height[l], height[r])*abs(r - l);
            //cout << cur << " ";
            _max = max(_max, cur);
            height[l] > height[r] ? r-- : l++;
        }
        
        return _max;
    }
};


// 5 5 6 7 8 9 5 5 


