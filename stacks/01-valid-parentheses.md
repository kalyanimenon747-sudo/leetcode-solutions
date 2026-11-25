## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Allocated a dynamic character array to act as a LIFO stack. Opening brackets (`(`, `[`, `{`) are pushed onto the stack, and closing brackets pop the top character to verify a matching bracket pair, returning `true` only if the stack is empty at the end.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Added an early odd-length check and freed the stack buffer on every return path to prevent memory leaks.