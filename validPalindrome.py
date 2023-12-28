class Solution:
    def validPalindrome(self, s):
        @lru_cache(None)
        def isPal(l, r, mismatch):
            if mismatch > 1:
                return False

            if l >= r:
                return True

            if s[l] == s[r]:
                return isPal(l + 1, r - 1, mismatch)
            else:
                return isPal(l, r - 1, mismatch + 1) or isPal(l + 1, r, mismatch + 1)

        return isPal(0, len(s) - 1, 0)
