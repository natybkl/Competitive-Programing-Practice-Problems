# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> TreeNode:
        return self.dfs(inorder,preorder,[0])
        
        
    def dfs(self, inorder, preorder, par_i):
        if len(inorder) == 0:
            return
        inorder_i = 0
        for i in range(len(inorder)):
            if inorder[i] == preorder[par_i[0]]:
                inorder_i = i
        
        left_list = inorder[0 : inorder_i]
        right_list = inorder[inorder_i + 1 :]
        
        node = TreeNode(inorder[inorder_i])
        par_i[0] += 1
        if len(left_list) != 0:
            node.left = self.dfs(left_list, preorder, par_i)
            par_i[0] += 1
        if len(right_list) != 0:
            node.right = self.dfs(right_list, preorder, par_i)
        return node

        
