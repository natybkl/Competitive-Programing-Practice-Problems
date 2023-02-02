class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        nums.sort()
        mx = nums[-1]
        left = 0
        count = 0
        while left < len(nums) and mx >= 0:
            if nums[left] != 0:
                count +=1
            mx -= nums[left]
            left +=1
        
        return count
        
