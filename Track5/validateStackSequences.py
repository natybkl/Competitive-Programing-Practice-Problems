class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        """
        """
        
        stack = []
        i,n = 0,len(popped)
        for num in pushed:
            stack.append(num)
            while len(stack) > 0 and i < n and stack[-1] == popped[i]:
                stack.pop()
                i = i + 1
                
        return len(stack) == 0
