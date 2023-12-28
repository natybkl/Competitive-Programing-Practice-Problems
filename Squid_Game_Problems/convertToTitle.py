class Solution:
    def convertToTitle(self, c: int) -> str:
        res = ""
        n = 26
        while c > 0 :   
            c -= 1
            res += chr( (c % n) + 65)
            c //= 26

        return res[::-1]  
        
