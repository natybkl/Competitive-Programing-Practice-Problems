class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        nextgreater = defaultdict(int)
        ans = [-1]*len(nums1)
        stack = []
        
        for num in nums2:
            while len(stack) > 0 and stack[-1] < num:
                nextgreater[stack[-1]] = num
                stack.pop()
                
            stack.append(num)
            
        for i in range(len(nums1)):
            if nums1[i] in nextgreater:
                ans[i] = nextgreater[nums1[i]]
                
        return ans
