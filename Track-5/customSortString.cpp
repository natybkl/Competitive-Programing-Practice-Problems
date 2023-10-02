class Solution {
public:
    string customSortString(string order, string s) {
        /* sorting with the help of lambda expression
           that overloads the comparator in sort function
           to sort character in "s" exactly as in the correct
           position of "order" */

        sort(s.begin(), s.end(), [=](const char& ch1, const char& ch2){ return order.find(ch1) < order.find(ch2);}); 
        return s;
    }
};
