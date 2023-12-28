class Solution:
    def restoreArray(self, adjacentPairs: List[List[int]]) -> List[int]:
        """
        2 - 1, 3
        1 - 2
        3 - 4, 2
        4 - 3
        1,2,3,4
        4,3,2,1
        """

        ans = []
        pairs = defaultdict(list)

        for a, b in adjacentPairs:
            pairs[a].append(b)
            pairs[b].append(a)

        start = 0
        visited = set()
        for num in pairs.keys():
            if len(pairs[num]) == 1:
                start = num
                break

        while start not in visited:
            ans.append(start)
            visited.add(start)
            for adj in pairs[start]:
                if adj not in visited:
                    start = adj
                    break

        return ans











            











        














