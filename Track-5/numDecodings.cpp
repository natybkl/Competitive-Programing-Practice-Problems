class Solution {
public:
    int ways(char ch1, char ch2) {
        if(ch1 == '*' && ch2 == '*')
                return 15;

        if(ch1 == '*')
             return (ch2 <= '6' ? 2 : 1);

        if(ch2 == '*') 
             return (ch1 == '1' ? 9 : (ch1 == '2' ? 6 : 0));

        return ch1 == '1' || (ch1 == '2' && ch2 <= '6');
    }

    int numDecodings(string s) {
        if(s[0] == '0')
            return 0;

        long f0 = 1, f1 = (s[0] == '*' ? 9 : 1);
        long f2, i;
        long m = 1000000007;

        for(int i = 2; i <= s.size(); i++){
            f2 = 0;
            f2 += (s[i-1] == '*' ? 9 : s[i-1] != '0') * f1;
            f2 += ways(s[i-2], s[i-1]) * f0;
            f0 = f1;
            f1 = f2 % m;
        }

        return f1;
    }
    
};
