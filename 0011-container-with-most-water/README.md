# LeetCode 11 - Container With Most Water

## Problem

Given an integer array `height` where `height[i]` represents the height of a vertical line at index `i`, find two lines that together with the x-axis form a container that holds the most water.

Return the maximum amount of water the container can store.

## Approach

I used the **Two Pointer** approach.

- Place one pointer at the beginning of the array.
- Place another pointer at the end.
- Calculate the area using:
  
  `Area = min(height[left], height[right]) × (right - left)`

- Update the maximum area.
- Move the pointer with the smaller height because moving the taller pointer cannot increase the limiting height.
- Continue until both pointers meet.

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

## Language

- C++

## LeetCode

Problem: **11. Container With Most Water**

Difficulty: **Medium**

Topics:
- Array
- Two Pointers
- Greedy
