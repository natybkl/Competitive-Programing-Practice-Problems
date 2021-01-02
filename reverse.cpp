class Solution {
public:
   signed long long int reverse( signed long long int x) {
    
       if(x>2147483647 || x<-2147483647){ return 0;}
     stringstream ss1, ss2;
       
     ss1<<x;
       
     string s;
       
     ss1>>s;
        
   signed long long int ans;   
    
        
     std::reverse(s.begin(), s.end());
      ss2<<s;
      
      ss2>>ans;
        
  if(ans>2147483647 || ans<-2147483648){return 0;} else if(x<0) {return ans*-1;} else { return ans;}
    }
};