class Solution {
public:
    ListNode* add(ListNode* h1,ListNode* h2, int carry){
        if(!h1 && !h2) return carry ? new ListNode(carry) : NULL;
        int val = (h1 ? h1->val : 0) + (h2 ? h2->val : 0) + carry;
        ListNode* node = new ListNode(val%10);
        node->next = add(h1 ? h1->next : NULL, h2 ? h2->next : NULL, val/10);
        return node;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1 = l1, *h2 = l2; 
        return add(l1, l2, 0);
    }
};


