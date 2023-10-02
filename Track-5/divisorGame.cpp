class Solution {
public:
    bool divisorGame(int n) {
        return (n % 2 == 0);
    }
};


class Solution {
public:
    bool divisorGame(int n) {
        return !(n & 1);
    }
};
