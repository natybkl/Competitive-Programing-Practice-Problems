class Solution:
    def countGoodNumbers(self, n: int) -> int:
        val = pow(20, n//2, 1000000007)*pow(5, n%2)
        return val%1000000007
    
    
