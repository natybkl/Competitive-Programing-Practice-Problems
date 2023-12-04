class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> count;
        vector<int> vals;
        int sum = 0, cnt = 0;
        for(int& num:arr) count[num]++;
        for(auto& a:count) vals.push_back(a.second);
        
        sort(vals.begin(), vals.end(), greater<int>());
        for(int& val:vals){
            sum += val;
            cnt++;
            if(sum >= arr.size()/2) return cnt;
        }
        
        return cnt;
    }
};
