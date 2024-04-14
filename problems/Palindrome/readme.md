# Approach

Type casted the integer to string and sliced the string by half and reversed the second part according to the odd and even length.

Returned the boolean of the comparison

# Complexity
- Time complexity: `47 ms`
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: `16.72 MB`
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```
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
```
