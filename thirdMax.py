class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        nums = set(nums)

        if len(nums) < 3:
            return max(nums)

        nums.discard(max(nums))
        nums.discard(max(nums))

        return max(nums)

        

