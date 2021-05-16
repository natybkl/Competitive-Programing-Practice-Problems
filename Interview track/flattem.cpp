
// brute force approach using O(N) space and O(N) time run time complexity
class Solution {
public:
    void inorder(TreeNode* root, vector<TreeNode*>& buff) {
        if(!root)
            return;
        
        buff.push_back(root);
        inorder(root->left, buff);
        inorder(root->right, buff);
    }
    
    void flatten(TreeNode* root) {
        if(!root)
            return;
        
        vector<TreeNode*> buff;
        TreeNode* tmp = root;
        inorder(tmp, buff);
        for(int i = 0; i < buff.size() - 1; i++) {
            buff[i]->right = buff[i+1];
            buff[i]->left = NULL;
        }
            buff.back()->right = NULL;
            buff.back()->left = NULL;
    }
}; */


// O(N) time O(1) space run time complexity with recursion
class Solution {
public:
    int i = 0;
    TreeNode* inorder(TreeNode* root) {
        if(!root)
            return NULL;
        i++;
        cout<<root->val<<endl;
       
        TreeNode* tmp_r = root->right; 
        TreeNode* tmp_l = root->left;
        TreeNode* tmp;
        TreeNode* from_l = inorder(tmp_l);   
        if(from_l != NULL) {
             root->right = from_l;
             tmp = root;
             while(tmp->right != NULL) {
                tmp = tmp->right;
             }
        }
            
        
        TreeNode* from_r = inorder(tmp_r);
        if(from_r != NULL && from_l != NULL) {
             tmp->right = from_r;
        } else if(from_l == NULL){
             root->right = from_r;
        } 
           

        root->left = NULL;
        return root;
    }
    
    void flatten(TreeNode* root) { 
        if(!root)
            return;
        
        TreeNode* tmp = root;
        TreeNode* nouse = inorder(tmp);
        TreeNode* tmp_last = root;
        while(--i) {
            tmp_last = tmp_last->right;
        }
            tmp_last->left = NULL;
            tmp_last->right = NULL;
    }
};


// O(N) time O(1) space run time complexity using while loop
class Solution {
public: 
    void flatten(TreeNode* root) {
        TreeNode* tmp = root;
        while(tmp) {
           if(tmp->left) {
               TreeNode* tmp_l = tmp->left;
               while(tmp_l->right) {
                   tmp_l = tmp_l->right;
               }
               
               tmp_l->right = tmp->right;
               tmp->right = tmp->left;
           }
              
            tmp->left = NULL;
            tmp = tmp->right;
        }
        
    }
    
};
