// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool found(vector<SinglyLinkedListNode*> s,SinglyLinkedListNode* head) {
    
    int k=s.size(),x=0;
    
    while(k!=0){
        
        if(s[x]==head) { return true; }
        
        k--;  x++;
        
    }
    
    return false;
    
    
}


bool has_cycle(SinglyLinkedListNode* head) {
 
        vector<SinglyLinkedListNode*> s;
    
       while(head!=NULL) {
           
           if(s.size()==0 || !found(s,head))
               
           {  s.push_back(head); }
           
           else if(found(s,head)){
               
             return true;  
               
               
           }
          
           head=head->next;
           
       }
    
     return false;
    

}
