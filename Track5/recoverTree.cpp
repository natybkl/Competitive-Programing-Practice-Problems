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
    void fill(TreeNode* root, vector<TreeNode*>& inorder) {
        if(!root) return;
        
        fill(root->left, inorder);
        inorder.push_back(root);
        for(auto itr = inorder.rbegin() + 1; itr!= inorder.rend(); itr++){
            if((*itr)->val <= (*(itr - 1))->val) break;
            
            // swap elements
            int tmp = (*itr)->val;
            (*itr)->val = (*(itr - 1))->val;
            (*(itr - 1))->val = tmp;
        }
        
        fill(root->right, inorder);
    }
    
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> inorder;
        TreeNode* tmp = root;
        fill(tmp, inorder);  
    }
};



    // 1 7 3 5 2 8 9
    // 1 2 3 5 7 8 9
    
    
    
    
