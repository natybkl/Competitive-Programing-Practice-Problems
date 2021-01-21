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
    long int sum=0;
    
    bool bn(int va,int low,int high){
        
    if((va<low && va<high) || (va>low && va>high)) return false;
    else return true;
        
    }
    long int rangeSumBST(TreeNode* root, int low, int high) {
        
         if(root!=NULL) {
             
         //long long int ck=((root->val)-low)*((root->val)-high);
             
         if(bn(root->val,low,high)) { 
             
         sum+=root->val;  rangeSumBST(root->right,low,high);  rangeSumBST(root->left,low,high);
             
         } 
         else {
             
          rangeSumBST(root->right,low,high);
             
          rangeSumBST(root->left,low,high);   
             
         }    
             
             
         }  return sum;
         
        
    }
};
