// recursive solution
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

// iterative solution
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
    
    vector<int> v;
    
    void in(TreeNode* root) {
        stack<TreeNode*> s;
        while(!s.empty() || root != NULL){
            
            while(root != NULL){
                
                s.push(root);
                root=root->left;
            }
            
          TreeNode* temp=s.top();
          s.pop();
          v.push_back(temp->val);
          root=temp->right;  
            
        }
        
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root==NULL) return v;
        in(root);
        return v;
    }
};
