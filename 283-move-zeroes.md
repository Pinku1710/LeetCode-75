# LeetCode 283 - Move Zeroes

**Difficulty:** Easy  
**Topic:** Array / Two Pointers  
**Language:** C++

## Problem

Move all `0`s to the end of the array while maintaining the relative order of the non-zero elements.

## Approach

Use the **Two Pointer** technique.

- `i` scans through the array.
- `j` keeps track of the position where the next non-zero element should be placed.
- Whenever `nums[i]` is non-zero, swap `nums[i]` with `nums[j]` and increment `j`.

This moves all non-zero elements to the front while pushing zeroes toward the end.

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## LeetCode

Problem: 283. Move Zeroes
