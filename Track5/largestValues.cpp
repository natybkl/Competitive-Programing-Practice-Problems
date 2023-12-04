class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        
        // level-by-level traversal to find max elemnt in each level
        while(!q.empty()){
            int maxval = INT_MIN;
            const int sz = q.size();
            for(int i = 0; i < sz; i++){
                auto a = q.front();
                q.pop();
                maxval = max(maxval, a->val);
                if(a->left) q.push(a->left);
                if(a->right) q.push(a->right);
            }
            res.push_back(maxval);
        }
        
        return res;
    }
};
