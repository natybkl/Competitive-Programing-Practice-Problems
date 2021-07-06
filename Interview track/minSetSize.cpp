class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> um;
        vector<int> nums;
        int ct=0,res=0;
        const int HSZ=arr.size()/2;
        for(int& ia:arr){
            um[ia]++;
        }
        for(auto&a:um){
           nums.push_back(a.second); 
        }
        
        sort(nums.begin(),nums.end());

        int i = nums.size()-1;   
        while(ct < HSZ){
          ct+=nums[i];
          i--; res++;
        }
        
        return res;
    }
};
