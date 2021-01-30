
class Solution {
public:
    int firstBadVersion(int n) {
        
    int l=0,h=n;
    while(l <= h){
      bool bad=isBadVersion(n);
      int mid=l+(h-l)/2;  
      if(isBadVersion(mid)) {   
        if(!isBadVersion(mid-1)) return mid;   
        h = mid - 1;  
      } 
      else {  
         l = mid + 1;  
      }       
    } 
        return -1;
    }
};
