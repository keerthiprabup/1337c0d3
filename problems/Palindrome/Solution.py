class Solution:
    def isPalindrome(self, x: int) -> bool:
        y = str(x)
        length = len(y)
        if length == 1:
            return True
        elif length % 2 == 0:
            return y[:length//2] == y[length//2:][::-1]
        else:
            return y[:length//2] == y[length//2 + 1:][::-1]
