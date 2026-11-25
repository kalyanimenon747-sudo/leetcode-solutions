## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Used vertical scanning character by character starting from index `0` of the first string (`strs[0]`). For each character position, compared it against every other string in `strs` and terminated the prefix with `\0` as soon as a mismatch or end-of-string was reached.

### Complexity
- Time: O(S), where S is the sum of all characters across all strings
- Space: O(1)

### Notes
Tested strings with no common prefix and a single-string input locally before submitting.