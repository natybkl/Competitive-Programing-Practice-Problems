class Solution {
public:
   int largestRectangleArea(vector<int> &height) {
           int res = 0;
           stack<int> st;
           height.push_back(0);
           for(int i = 0; i < height.size(); i++){
               while(!st.empty() && height[st.top()] > height[i]){
                   int hgt = height[st.top()];
                   st.pop();
                   int wid = st.empty() ? -1 : st.top();
                   res = max(res, hgt*(i - wid - 1));
               }
               
               st.push(i);
           }
       
           return res;
   }
};
