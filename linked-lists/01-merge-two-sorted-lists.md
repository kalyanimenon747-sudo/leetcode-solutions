## Problem: Merge Two Sorted Lists (Easy)

**Link:** https://leetcode.com/problems/merge-two-sorted-lists/

### Approach
Used a stack-allocated dummy head node and a `tail` pointer to splice existing nodes from `list1` and `list2` in non-decreasing order without allocating new nodes. Once one list is exhausted, attached the remainder of the other list directly.

### Complexity
- Time: O(n + m)
- Space: O(1)

### Notes
Tested merging two non-empty lists, two empty lists, and one empty list locally before submitting.