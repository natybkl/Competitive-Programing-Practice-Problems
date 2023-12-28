class Solution:
    def numOfPairs(self, nums: List[str], target: str) -> int:
        count = Counter(nums)
        T, total = len(target), 0
        
        for num in nums:
            N = len(num)
            prefix, suffix = target[:N], target[N:]

            if N > T or prefix != num:
                continue

            total += count[suffix] 

            if suffix == num:
                total -= 1
            

        return total 
