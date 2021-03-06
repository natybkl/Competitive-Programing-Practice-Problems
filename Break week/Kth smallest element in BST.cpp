class Solution {
public:
    priority_queue<int> pq;
    
    void dfs(TreeNode* node) {
        if(node == NULL) return;
        pq.push(node->val*-1);
        if(node->left)
            dfs(node->left);   
        if(node->right)
            dfs(node->right);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        while(k!=1) {
            pq.pop();
            k--;
         }
        return pq.top()*-1;
    }
};
