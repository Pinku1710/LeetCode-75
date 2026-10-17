# LeetCode 1657: Determine if Two Strings Are Close

## Problem
Given two strings, determine whether they are close using the allowed character operations.

## Approach: Frequency Counting + Sorting

1. Check whether both strings have equal lengths.
2. Count the frequency of each lowercase English letter in both strings.
3. Check that both strings contain exactly the same set of characters.
4. Sort both frequency arrays.
5. If the sorted arrays are equal, return `true`; otherwise, return `false`.

## Example

**Input**
```text
word1 = "cabbba"
word2 = "abbccc"
```

**Output**
```text
true
```

**Explanation:** Both strings contain the same characters, and their character frequencies can be rearranged to match.

## Complexity Analysis

- **Time Complexity:** O(n), because the alphabet has a fixed size of 26.
- **Space Complexity:** O(1), because the frequency arrays have a fixed size of 26.

## Topics
- String
- Hash Table
- Sorting
- Counting

## Language
C++
