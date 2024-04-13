# Intuition
> Priority based result calculation

# Approach
Add or substract the value based on the comparison between  the current and the next value starting from the end of the string.

# Complexity
- Time complexity: $$3ms$$

- Space complexity: $$44.7 MB$$

# Code
```
class Solution {
    public static int data(char s) {
        switch (s) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }

    }

    public static int romanToInt(String s) {
        int i,result = 0;
        int length = s.length();
        int curr = data(s.charAt(length-1));
        result+=curr;
        for(i=length-2;i>=0;i--){
            curr=data(s.charAt(i));
            int next=data(s.charAt(i+1));
            if(curr<next)
                result-=curr;
            else if(curr>=next)
                result+=curr;
        }
        return result;
    }
}
```