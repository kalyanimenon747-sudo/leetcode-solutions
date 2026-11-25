## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Used two pointers (`left` at `0` and `right` at `sSize - 1`) to swap characters inward in-place until they meet. This reverses the array without allocating extra memory.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Tested odd-length, even-length, and single-character inputs locally before submitting.