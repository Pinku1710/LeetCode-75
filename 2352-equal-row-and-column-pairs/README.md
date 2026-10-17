# LeetCode 2352 — Equal Row and Column Pairs

**Difficulty:** Medium

**Topics:** Array, Hash Table, Matrix

## Problem Statement

Given a 0-indexed `n x n` integer matrix `grid`, return the number of pairs `(ri, cj)` such that row `ri` and column `cj` are equal.

Two arrays are equal if they contain the same elements in the same order.

## Approach

1. Iterate through every row.
2. Iterate through every column.
3. Compare the corresponding elements of the selected row and column.
4. If all elements match, increment the count.
5. Return the total count.

## Complexity Analysis

- **Time Complexity:** O(n³)
- **Space Complexity:** O(1) extra space

## Language

C++

## Solution

See [`2352-equal-row-and-column-pairs.cpp`](./2352-equal-row-and-column-pairs.cpp).

## Key Learning

This problem teaches matrix traversal and element-by-element comparison of rows and columns.
