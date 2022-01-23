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
    ListNode* insertionSortList(ListNode* head) {
        vector<ListNode*> res;
        ListNode* tmp = head;
        while(tmp){
            res.push_back(tmp);
            tmp = tmp->next;
        }
        
        sort(res.begin(), res.end(), [](const auto& node1, const auto& node2){
            return node1->val < node2->val; 
        });
        
        for(auto a: res){
            cout << a->val << " ";
        }
        
        head = res[0];
        tmp = head;
        for(int i = 1; i < res.size(); i++){
            head->next = res[i];
            head = head->next;
        }
        
        head->next = NULL;
        return tmp;
    }
};

