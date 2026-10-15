
# LeetCode 1207 - Unique Number of Occurrences

## Problem
Determine whether the number of occurrences of each
value in the array is unique.

## Difficulty
Easy

## Topic
- Array
- Hash Table

## Approach
1. Use an unordered_map to count each number's frequency.
2. Store each frequency in an unordered_set.
3. If a frequency already exists in the set, return false.
4. If all frequencies are unique, return true.

## Complexity Analysis
- Time Complexity: O(n) average
- Space Complexity: O(n)

## Language
C++

## Solution
See [1207-unique-number-of-occurrences.cpp](./1207-unique-number-of-occurrences.cpp).
