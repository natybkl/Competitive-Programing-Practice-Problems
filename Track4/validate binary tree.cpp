
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


//one round trip solution
class Solution {
public:
    
    bool valid(TreeNode* node,long long min,long long max){
       
        if(node->val <= min || node->val >= max) return false;
        
        if(node->left != NULL && !valid(node->left,min,node->val)) return false;
        
        if(node->right != NULL && !valid(node->right,node->val,max)) return false;
        
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        
        if(root == NULL) return true;
        
        return valid(root,LLONG_MIN,LLONG_MAX);
        
    }
};
