# Code
```
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i,j,n;
        n=nums.length;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){
                if((nums[i]+nums[j])==target){
                    return new int[]{i,j};
                }
            }
        }
        return null;
    }
}

```
