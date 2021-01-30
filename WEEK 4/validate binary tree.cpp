
class Solution {
public:
    vector<int> v;
    void in(TreeNode* root){
        
      if(root == NULL) return;
      in(root->left);
      v.push_back(root->val);  
      in(root->right);
        
    }
    
    bool isValidBST(TreeNode* root) {
        
      in(root);
        
      for(int i=0; i<v.size()-1; i++){
          
         if(v[i]>=v[i+1]) return false; 
          
      }  
        
      return true;  
    }
};
