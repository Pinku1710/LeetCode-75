# 334. Increasing Triplet Subsequence

**Difficulty:** Medium  
**Language:** C++  
**Topic:** Array / Greedy

## Approach

We need to find whether there exist three indices `i < j < k` such that:

`nums[i] < nums[j] < nums[k]`

We maintain two variables:

- `first` → smallest value seen so far
- `second` → smallest value greater than `first`

If we find a number greater than `second`, an increasing triplet exists.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## LeetCode

Problem: 334. Increasing Triplet Subsequence
