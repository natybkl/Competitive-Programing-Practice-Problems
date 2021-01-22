/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      
        
   void insert(TreeNode** root,int val) {
        
        
        TreeNode* leaf=new TreeNode;
        leaf->val=val;
        leaf->left=NULL;
        leaf->right=NULL;
        
        if(*root==NULL) { *root=new TreeNode(val); exit(0); }
        
        while(((*root)->left!=NULL) || ((*root)->right!=NULL)) {
          
          
        if(((*root)->val>=val) && ((*root)->left!=NULL)) {
        
        *root=(*root)->left;
            
        } else if(((*root)->val>=val) && ((*root)->left==NULL)) {
         
        break;    
            
        } else if(((*root)->val<val) && ((*root)->right!=NULL)){
            
        *root=(*root)->right;   
            
        } else if(((*root)->val<val) && ((*root)->right==NULL)) {
            
        break;    
            
        }
          
          
      }
        
        
        
        if((*root)->val>=val) (*root)->left=leaf;    
            
        else (*root)->right=leaf;
          
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
    
        TreeNode* oor=root;
        
        insert(&root,val);
        
        return oor;
        
    }
};
