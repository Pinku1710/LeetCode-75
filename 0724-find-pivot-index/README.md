
# 724. Find Pivot Index

- **Platform:** LeetCode
- **Problem Number:** 724
- **Difficulty:** Easy
- **Topic:** Array, Prefix Sum
- **Language:** C++
- **Problem Link:** [Find Pivot Index](https://leetcode.com/problems/find-pivot-index/)

## Problem Statement

Given an integer array `nums`, find the pivot index.

The pivot index is the index where the sum of all the numbers
strictly to the left of the index is equal to the sum of all
the numbers strictly to the right.

If no such index exists, return `-1`.

## Approach: Total Sum

1. Calculate the sum of all array elements.
2. Initialize `leftSum = 0`.
3. For each index, calculate:

   `rightSum = totalSum - leftSum - nums[i]`

4. If `leftSum == rightSum`, return the current index.
5. Otherwise, add `nums[i]` to `leftSum`.
6. If no pivot index is found, return `-1`.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Example

**Input:**
`nums = [1, 7, 3, 6, 5, 6]`

**Output:**
`3`

**Explanation:**
The sum on the left of index 3 is 11, and the sum on the
right is also 11.

## Key Learning

This problem demonstrates how a total sum and a running left
sum can be used to calculate the right sum efficiently,
without creating an additional array.
