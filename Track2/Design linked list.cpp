class MyLinkedList {
public:
    
    vector<int> linked_list;

    /** Initialize your data structure here. */
    MyLinkedList() {
        
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>=0 && index<linked_list.size())
        {
            return(linked_list[index]);
        }
        return -1;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        linked_list.insert(linked_list.begin(),val);
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        linked_list.push_back(val);
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        int n=linked_list.size();
        if(index<n)
        {
            linked_list.insert(linked_list.begin()+index,val);
        }
        if(index==n)
            linked_list.push_back(val);
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int n=linked_list.size();
        if(index>=0 && index<n)
        {
            linked_list.erase(linked_list.begin()+index);
        }
    }
};
