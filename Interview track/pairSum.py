# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        vals = []
        tmp = head
        while tmp: 
            vals.append(tmp.val)
            tmp = tmp.next
            
        l,r,max_val = 0, len(vals)-1,0
        while l < r:
            max_val = max(max_val, vals[l] + vals[r])
            l += 1  
            r -= 1
            
        return max_val
