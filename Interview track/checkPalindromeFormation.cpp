class Solution {
public:
    bool checkpal(string& a, string& b) {
        int i = 0, j = a.size() - 1; 
        
        //first get greedy and check palindormic relation as much as possible
        while(i <= j) {
            if(a[i] != b[j])
                break;
            i++; j--;
        }
        
       //if we make it atleast to the middle, it means we can split and make palindrom string
       if(i >= j) 
            return true;
        
       //otherwise starting from the positions we stopped 
       //let's check paliandromic relation in one of the strings
       int tmp_i = i,tmp_j = j;
       
       while(tmp_i <= tmp_j) {
           if(a[tmp_i] != a[tmp_j])
               break;
           tmp_i++; tmp_j--;
       }
    
       if(tmp_i >= tmp_j)
           return true;
        
       while(i <= j){
           if(b[i] != b[j])
               break;
           i++; j--;
       }
        
       if(i >= j)
           return true;
           
       return false;
    }
    
    bool checkPalindromeFormation(string a, string b) {
        return checkpal(a, b) || checkpal(b, a);   
    }
};
