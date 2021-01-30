class Solution {
public:
    vector<int> arr;
    void in(TreeNode* node){
        
        if(node == NULL) return;
        in(node->left);
        arr.push_back(node->val);
        in(node->right);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == NULL) return arr;
        in(root);
        return arr;
        
    }
};
