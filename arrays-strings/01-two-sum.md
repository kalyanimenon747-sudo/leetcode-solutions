## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a nested loop to check pairs `(i, j)` with `j > i` until `nums[i] + nums[j] == target`, then returned a heap-allocated two-element index array.

### Complexity
- Time: O(n^2)
- Space: O(1) extra space (excluding the 2-element output array)

### Notes
Tested duplicate values (`[3, 3]`) and a non-matching case locally before submitting.