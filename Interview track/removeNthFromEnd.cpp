class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* l = head; 
       ListNode* r = head;
       while(n--)
           r = r->next;
    
       if(!r){
          head = head->next;
          return head;
       }
        
       while(r->next){
           r=r->next;
           l=l->next;
       } 
         if(l->next)
             l->next = l->next->next;
       else 
           l=l->next;
        
        return head;
        
    }
};
