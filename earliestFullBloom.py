class Solution:
    def earliestFullBloom(self, plantTime: List[int], growTime: List[int]) -> int:
        if len(plantTime) == 1:
            return plantTime[0] + growTime[0]
    
        s = [[plantTime[i], growTime[i], plantTime[i]-growTime[i]] for i in range(len(plantTime))]
        s.sort(key = lambda x : -x[1])
        
        last = s[0][0]
        boom = s[0][0]+s[0][1]

        for i in range(1,len(s)):
            last += s[i][0]
            boom = max(boom, last + s[i][1])
        
        return boom
