## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Checked length equality first, then used a fixed 26-element frequency array to increment counts for characters in `s` and decrement for characters in `t` in a single pass. If all counts end at `0`, the strings are anagrams.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Tested mismatched lengths and single-character inputs locally before submitting.