## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Tracked the lowest buying price seen so far (`min_price`) while iterating through `prices` once, updating `max_profit` whenever `prices[i] - min_price` beat the best profit found so far. This solves the problem in a single pass without nested loops.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Tested strictly decreasing prices (where no profitable transaction exists) and a single-day price array locally before submitting.