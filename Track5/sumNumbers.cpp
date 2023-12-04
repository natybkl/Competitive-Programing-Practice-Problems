class Solution {
public:
    void add(TreeNode* root, int power, int &sum) {
        if(!root)
            return ;
         
        power = root->val + power*10;
            
        if(!root->left && !root->right)
            sum += power;
       
        add(root->left, power, sum);     
        add(root->right, power, sum);
    }
    
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        add(root, 0, sum);
        return sum;
    }
};
