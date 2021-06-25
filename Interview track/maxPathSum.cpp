class Solution {
public:
pair<int, int> maxsum(TreeNode* root){
	if(!root) {
		return {0,INT_MIN};
	} 

	pair<int, int> myans;
	pair<int, int> ltans = maxsum(root->left);
	pair<int, int> rtans = maxsum(root->right);
    
    myans.first = max({ltans.first + root->val, rtans.first + root->val, root->val});
    myans.second = max({ltans.first + root->val + rtans.first, ltans.second, rtans.second,                              myans.first, root->val });
	
	return myans;

}
    
int maxPathSum(TreeNode* root) {
    return max(maxsum(root).first, maxsum(root).second);
}
    
};
