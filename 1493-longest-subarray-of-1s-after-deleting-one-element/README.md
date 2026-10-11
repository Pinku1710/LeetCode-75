# LeetCode 1493: Longest Subarray of 1's After Deleting One Element

- **Difficulty:** Medium
- **Topics:** Array, Sliding Window
- **Language:** C++
- **Problem Link:** [LeetCode 1493](https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/)

## Problem Statement

Given a binary array `nums`, delete exactly one element from the array. Return the length of the longest non-empty subarray containing only `1`s after the deletion.

## Approach: Sliding Window

- Maintain a sliding window with at most one zero.
- Expand the window using the `right` pointer.
- If the window contains more than one zero, move the `left` pointer until the window becomes valid.
- Update the answer using `right - left`, because exactly one element must be deleted.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Example

**Input:** `nums = [1,1,0,1,1,1]`

**Output:** `5`

**Explanation:** Delete the zero to obtain five consecutive ones.

## Solution

See [1493-longest-subarray-of-1s-after-deleting-one-element.cpp](1493-longest-subarray-of-1s-after-deleting-one-element.cpp).

## Key Learning

Sliding Window is useful for finding the longest valid subarray while maintaining a constraint, such as allowing at most one zero.
