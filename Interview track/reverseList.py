# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        templist = []
        if head == None or head.next == None:return head
        while head:
            templist.append(head)
            head = head.next
       
        templist.reverse()
        head = templist[0]
        templist[-1].next = None
        for i in range(0,len(templist) - 1):
            
            templist[i].next = templist[i + 1]
        
        return head
