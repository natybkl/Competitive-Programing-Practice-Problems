class Solution {
public:
    
    ListNode* tail;
    
    
    ListNode* helper(ListNode* head) {
            
        if(!head || head->next == NULL) {
            
           tail = head;
           return tail;

        }

        auto newHead = helper(head->next);  
        newHead->next = head;
        head->next = NULL;
        return head;
            
    }
    
    
    ListNode* reverseList(ListNode* head) {
        
        helper(head);
        
        return tail;
    }
};
