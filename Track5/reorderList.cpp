class Solution {
public:
    void reorderList(ListNode* head) {
        vector<ListNode*> nodes;
        ListNode* tmp = head;
        int cnt = 0;
        
        while(tmp) {
            nodes.push_back(tmp);
            tmp = tmp->next;
            cnt++;
        }
        
        cout<<cnt;
        int sz = nodes.size();
        for(int i = 0; i < sz/2; i++) {
            nodes[i]->next = nodes[sz-1-i];
            if(--cnt == 0) {
                nodes[sz-1-i]->next = NULL;
                break;
            }
            nodes[sz-1-i]->next = nodes[i+1];
            nodes[i+1]->next = NULL;
            cnt--;
        }
        
    }
};
