class Solution {
public:
    bool isbal=true;
    
    int isBala(TreeNode* root) {
        
         if(root == NULL) return 0;
         if(!isbal) return 0;
         int lf=isBala(root->left);
         int rt=isBala(root->right);
         if(abs(lf-rt) > 1) isbal=false;
         return max(lf,rt)+1;
    
        }
    
        bool isBalanced(TreeNode* root) {
            if(root == NULL ) return true;
            int ck=isBala(root);
            cout<<ck; exit(0);
            return isbal;
        }
         
    
};
