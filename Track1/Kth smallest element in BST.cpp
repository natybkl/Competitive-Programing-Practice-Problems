class Solution {
public:
    priority_queue<int> pq;
   
    /
    void dfs(TreeNode* node) {
        if(node == NULL) return;
        pq.push(node->val*-1);
        if(node->left)
            dfs(node->left);   
        if(node->right)
            dfs(node->right);
    }
 
    // bfs traversing
    void bfs(TreeNode* node) {
        queue<TreeNode* > q;
        q.push(node);
        while(!q.empty()) {
           TreeNode* cur = q.front();
           q. pop();
           if(cur->left)
                q.push(cur->left);
           if(cur->right)
                q. push(cur->right);
           pq.push(cur->val*-1);
        }
    }


    int kthSmallest(TreeNode* root, int k) {
        dfs(root); 
       //bfs(root);    either of the two calls works fine
        while(k!=1) {
            pq.pop();
            k--;
         }
        return pq.top()*-1;
    }
};
