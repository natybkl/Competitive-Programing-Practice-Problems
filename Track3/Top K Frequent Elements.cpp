class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        if(nums.size() == 1 ) return nums;
      
        priority_queue<int> pq;
        unordered_map<int,int> um;
        vector<int> res;
        
        for(int i:nums)
            um[i]+=1;
        
        for(auto a:um)
            pq.push(a.second); 
        
        int val;
        while(k != 0) {
            auto it=um.begin();
            for(auto a:um) {
                if(a.second == pq.top()) {
                    val=a.first;
                    um.erase(it);
                    break;
                }
               it++; 
            }
            res.push_back(val);
            pq.pop();
            k--;
        }
        
        return res;
        
    }
};
