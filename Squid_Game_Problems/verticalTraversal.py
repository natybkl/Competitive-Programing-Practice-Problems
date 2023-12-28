class Solution:
    def verticalTraversal(self, root):
        dic = defaultdict(list)
        min_l, max_l = inf, -inf

        def dfs(root, lvl_h, lvl_v):
            nonlocal min_l, max_l
            min_l = min(lvl_h, min_l)
            max_l = max(lvl_h, max_l)

            dic[lvl_h].append((lvl_v, root.val))

            if root.left:  
                dfs(root.left,  lvl_h-1, lvl_v+1)

            if root.right:
                 dfs(root.right, lvl_h+1, lvl_v+1)
        
        dfs(root, 0, 0)

        out = []
        for i in range(min_l, max_l + 1):
            out += [[j for i,j in sorted(dic[i])]]

        return out
