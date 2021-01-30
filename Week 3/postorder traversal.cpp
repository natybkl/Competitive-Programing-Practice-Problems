class Solution {
public:
    
    vector<int> arr;
    
    void post(TreeNode* root){
        
    if(root==NULL) return;
        
    post(root->left);
        
    post(root->right);
        
    arr.push_back(root->val);    
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
     if(root==NULL) return arr;
        
     else post(root);  return arr;    
        
    }
};
