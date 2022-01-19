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
    bool isPal(string& s, int l, int r){
        return l >= r ? 1 : s[l++] != s[r--] ? 0 : isPal(s, l, r);
    }
    
    bool isPalindrome(ListNode* head) {
        string s = "";
        while(head) {
            s += to_string(head->val);
            head = head->next;
        }
        
        return isPal(s, 0, s.size()-1);
    }
};
