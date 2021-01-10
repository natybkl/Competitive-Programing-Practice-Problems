class Solution {
	
public:
	
bool isAnagram(string s, string t) {
      
      bool isag=false;
      int ssize=s.length();
      int tsize=t.length();
      vector<int> nums1;
      vector<int> nums2;
      vector<int> inter;
        
      if(ssize!=tsize)
   
   { 
   
   return isag;
   
   }
        
      for(int i=0; i<ssize; i++)
    {
         nums1.push_back(s[i]); 
         nums2.push_back(t[i]);      
    }
    
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
    
      set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(), back_inserter(inter) );
   
        
   if(ssize!=inter.size()) {
       
       return isag;
       
   } else{ isag=true; return isag; }   
        
     
    }
};

