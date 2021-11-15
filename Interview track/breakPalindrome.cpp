class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n  = palindrome.size();
        if(n == 1) return "";
        
        string tmp = palindrome;
        if(n == 0)
            return "";
        
        int i = 0;
        while(i < n){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                break;
            } 
            
            i++;
        }
        
        i = 0;
        while(i < n){
            if(palindrome[i] != 'a'){
                return palindrome;
            } 
            
            i++;
        }
        
        
        tmp[n - 1] = 'b';
        return tmp;
    }
};
