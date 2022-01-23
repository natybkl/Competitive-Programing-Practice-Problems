/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* tmp1 = list1,*tmp2 = list2, *dummy = new ListNode(), *head = dummy;
        while(tmp1 and tmp2){
            dummy->next = tmp1->val <= tmp2->val ? tmp1 : tmp2;
            tmp1->val <= tmp2->val ? tmp1 = tmp1->next : tmp2 = tmp2->next; 
            dummy = dummy->next;
        }
        
        if(tmp1) dummy->next = tmp1;
        if(tmp2) dummy->next = tmp2;
        
        return head->next;
    }
};
