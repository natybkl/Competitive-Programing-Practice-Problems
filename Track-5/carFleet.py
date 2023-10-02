class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        time = []
        for p,s in sorted(zip(position, speed)):
            time.append(float(target - p)/s)
            
        cur, ans = 0, 0
        for t in time[::-1]:
            if t > cur:
                ans = ans + 1
                
            cur = max(cur, t)
            
        return ans;
