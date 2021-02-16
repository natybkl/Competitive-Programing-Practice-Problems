class Solution {
public:
    int maxht=0;
    int maxD(TreeNode* root) {
        if(root == NULL) return 0;
        int lf=maxD(root->left);
        int rt=maxD(root->right);
        maxht=max(lf,rt)+1;
        return maxht;
    }
    
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        maxD(root);
        return maxht;
    }
};
