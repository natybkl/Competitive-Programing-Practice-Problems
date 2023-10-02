class Solution {
public:
    
     pair<int, TreeNode*> dfs(TreeNode* root){
        if(!root) 
            return {0, NULL};
        
        pair<int, TreeNode*> lfTree = dfs(root->left);
        pair<int, TreeNode*> rtTree = dfs(root->right);
        
        if(lfTree.first == rtTree.first) {
             return {rtTree.first + 1, root};
        } else {
            if(lfTree.first > rtTree.first) {
                return { max(lfTree.first, rtTree.first) + 1, lfTree.second};
            }else 
                return { max(lfTree.first, rtTree.first) + 1, rtTree.second};
        }
    }
    
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return dfs(root).second;
    }
    
   
};
