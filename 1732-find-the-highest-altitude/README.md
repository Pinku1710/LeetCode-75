# LeetCode 1732 — Find the Highest Altitude

## Problem
Given an integer array `gain`, where `gain[i]` represents the net gain in altitude between two consecutive points, return the highest altitude reached during the trip.

The starting altitude is `0`.

## Approach: Prefix Sum

1. Initialize `altitude = 0` and `maxAltitude = 0`.
2. Traverse the `gain` array.
3. Add each gain to the current altitude.
4. Update the maximum altitude whenever a higher altitude is reached.
5. Return `maxAltitude`.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Language
C++

## Topic
Array, Prefix Sum

## Solution
See [`1732-find-the-highest-altitude.cpp`](./1732-find-the-highest-altitude.cpp).

## Problem Link
[LeetCode 1732 — Find the Highest Altitude](https://leetcode.com/problems/find-the-highest-altitude/)
