class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> k;
        for(int num = arr.size(); num > 1; num--){
            int idx = find(arr.begin(), arr.end(), num) - arr.begin() + 1;
            k.push_back(idx);
            k.push_back(num);
            reverse(arr.begin(), arr.begin() + idx);
            reverse(arr.begin(), arr.begin() + num);
        }
        
        return k;
    }
};
