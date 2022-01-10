class Solution:
    def reverseParentheses(self, s: str) -> str:
        stack = []
        
        for ch in s:
            buff = []
            if ch != ')':
                stack.append(ch)
            else:
                while stack[-1] != '(':
                    buff.append(stack.pop())
                stack.pop()
                stack.extend(buff)
                
        
        return ''.join(stack)
