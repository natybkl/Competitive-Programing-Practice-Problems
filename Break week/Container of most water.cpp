class Solution {
public:
    int maxArea(vector<int>& height) {
     int area=0,maxArea=0;
     int hgt,wid;
     int lf=0,rt=height.size()-1;  
   
     while(lf != rt) {
        hgt=min(height[lf], height[rt]); 
        wid=rt-lf;
        area=hgt*wid;
        if(area>maxArea) maxArea=area;

        if(height[lf]==hgt) lf++;
        else rt--   
     }   
       return maxArea; 
    }
};
