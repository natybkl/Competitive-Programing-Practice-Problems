class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        """
        """
        mono = []
        
        for i in num:
            while k > 0 and len(mono) > 0 and mono[-1] > i:
                mono.pop()
                k = k -1
                
            mono.append(i)
            
        while k:
            mono.pop()
            k = k - 1
            
        ans = "".join(mono)
        
        ans = ans.lstrip('0')
        
        if len(ans) == 0:
            return "0"
        else:
            return ans
        
