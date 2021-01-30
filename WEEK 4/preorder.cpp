
class Solution {
public:
    vector<int> arr;
    void pre(TreeNode* node){
        
        if(node == NULL) return;
        arr.push_back(node->val);
        pre(node->left);
        pre(node->right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root == NULL) return arr;
        pre(root);
        return arr;
        
    }
};
