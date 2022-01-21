class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vals,stk;
        ListNode* tmp = head;
        while(tmp){
            vals.push_back(tmp->val);
            tmp = tmp->next;
        }
        
        vector<int> res(vals.size());
        for(int i = 0; i < vals.size(); i++){
            while(stk.size() > 0 and vals[stk.back()] < vals[i]){
                res[stk.back()] = vals[i];
                stk.pop_back();
            }
            
            stk.push_back(i);
        }
        
        return res;
    }
};
