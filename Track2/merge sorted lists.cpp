
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        vector<int> v1;
        vector<ListNode*> v2;
        
        if(l1==NULL && l2==NULL) return NULL;
        
        if(l1 && !l2) return l1;
        
        if(l2 && !l1) return l2;
        
        while(l1!=NULL) {
            
         v1.push_back(l1->val);
         l1=l1->next;   
            
        }
        
        while(l2!=NULL) {
            
         v1.push_back(l2->val);
         l2=l2->next;   
            
        }
        
        sort(v1.begin(),v1.end());
        
        for(auto a: v1){
            
         ListNode* l3=new ListNode;
            
         l3->val=a;    
         v2.push_back(l3);   
            
        }
        
        for(int i=0; i<v2.size()-1; i++){
            
            
        v2[i]->next=v2[i+1];    
            
        }
        
        return v2[0];
    }
};
