//recursive solution
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

//itrative solution
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
    vector<int> arr;
    void pre(TreeNode* root) {
        
     stack<TreeNode*> s;
     s.push(root);
        
       while(s.empty()!=true){
            TreeNode* node=s.top();
            s.pop();
            arr.push_back(node->val);
            if(node->right) s.push(node->right);
            if(node->left) s.push(node->left);
            
        }
        
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root == NULL) return arr;
        pre(root);
        return arr;
        
    }
};
