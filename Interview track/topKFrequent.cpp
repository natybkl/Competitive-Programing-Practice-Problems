class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> pairs;
        priority_queue<vector<int>> topKs;
        vector<int> ans;
        for(int& num:nums) pairs[num]++;
        for(auto& pair:pairs){
            topKs.push({-1*pair.second, pair.first});
            if(topKs.size() > k) topKs.pop();
        }
        
        while(!topKs.empty()){
            ans.push_back(topKs.top()[1]);
            topKs.pop();
        }
        
        return ans;
    }
};
