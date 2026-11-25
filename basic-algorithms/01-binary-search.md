## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach
Used iterative binary search with `left` and `right` pointers over the sorted array. At each step, computed `mid = left + (right - left) / 2` to avoid integer overflow, returning `mid` on a match or halving the search interval left or right.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Tested target-present, target-absent, and single-element array edge cases locally before submitting.