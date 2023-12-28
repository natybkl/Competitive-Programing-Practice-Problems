class Solution:
    def __init__(self, w: List[int]):
        self.w = w
        self.total = sum(w)
        for i in range(1, len(w)):
            self.w[i] += self.w[i - 1]

    def pickIndex(self) -> int:
        return bisect_right(self.w, randrange(0, self.total))


