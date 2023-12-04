class Solution {
	
public:
	
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
      vector<int> inter;

      sort(nums1.begin(), nums1.end());

      sort(nums2.begin(), nums2.end());
     
      set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(), back_inserter(inter) );
   
      inter.erase(unique(inter.begin(), inter.end()),inter.end());  

      return inter; 
        
    }
};
