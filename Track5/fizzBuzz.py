class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans = []
        for i in range(1, n + 1):
            if i%15 == 0: ans += ["FizzBuzz"]
            elif i%5 == 0: ans += ["Buzz"]
            elif i%3 == 0: ans += ["Fizz"]
            else: ans += [str(i)]
            
        return ans
