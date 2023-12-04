class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head) return head;
        
        vector<ListNode*> res;
        while(head) {
            res.push_back(head);
            head = head->next;
        }
        
        sort(res.begin(), res.end(), [](const auto& node1, const auto& node2){
            return node1->val < node2->val;
        });
        
        ListNode* head_ = res[0], *tmp = head_;
        for(int i = 1; i < res.size(); i++){
            head_->next = res[i];
            head_ = head_->next;
        }
        
        head_->next = NULL;
        return tmp;
    }
};
