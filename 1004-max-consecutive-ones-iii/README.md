# LeetCode 1004: Max Consecutive Ones III

**Difficulty:** Medium  
**Topic:** Array, Binary Search, Sliding Window  
**Language:** C++

## Problem Statement

Given a binary array `nums` and an integer `k`, return the maximum number of consecutive `1`s in the array if you can flip at most `k` zeros.

## Approach: Sliding Window

1. Maintain a window using two pointers, `left` and `right`.
2. Expand the window by moving `right`.
3. Count the zeros inside the window.
4. If the number of zeros exceeds `k`, move `left` forward until the window becomes valid.
5. Update the maximum window length at each step.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Key Learning

Learned how to use the sliding window technique to find the longest valid subarray while maintaining a constraint on the number of zeros.

## Solution

See [1004-max-consecutive-ones-iii.cpp](1004-max-consecutive-ones-iii.cpp).

## LeetCode

[Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/)
