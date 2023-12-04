class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *fast;
        ListNode *slow;
        
        fast=head;
        slow=head;
        
        
        
        while(fast!=NULL && fast->next!=NULL){
            
           slow=slow->next; 
           fast=fast->next->next; 
        }
        
        return slow;
    }
};
