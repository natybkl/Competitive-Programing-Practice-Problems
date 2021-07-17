class Solution {
public:
    string customSortString(string order, string s) {
        sort(s.begin(), s.end(), [=](const char& ch1, const char& ch2){ return order.find(ch1) < order.find(ch2);}); 
        return s;
    }
};
