class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        curr = blocks[:k].count('W')
        ans = curr
        l, r = 0, k

        while r < len(blocks):
            if blocks[r] == 'W':
                curr += 1

            if blocks[l] == 'W':
                curr -= 1

            ans = min(ans, curr)
            l += 1
            r += 1

        return ans
        
