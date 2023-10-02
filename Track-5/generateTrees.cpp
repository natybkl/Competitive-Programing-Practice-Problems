class Solution {
public:
    vector<TreeNode*> solve(int start, int end){
        vector<TreeNode*> ans;
        if(start > end){
            ans.push_back(NULL);
            return vec;
        }
        
        for(int i = start; i <= end; i++){
            vector<TreeNode*> left = solve(start, i-1);
            vector<TreeNode*> right = solve(i+1, end);
            for(auto &l : left){
                for(auto &r : right){
                    TreeNode* newNode{i}
                    newNode->left = l;
                    newNode->right = r;
                    ans.push_back(newNode);
                }
            }
        }
        return ans;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
};
