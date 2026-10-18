# 2390. Removing Stars From a String

## Problem
Given a string `s` containing lowercase English letters and stars (`*`), remove each star and the closest non-star character to its left. Return the resulting string.

## Approach
Use a string as a stack.

- Traverse each character of the input string.
- If the character is `*`, remove the last character from the answer.
- Otherwise, append the character to the answer.
- Return the final answer.

## Complexity Analysis
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

## Language
C++

## Solution
[`2390-removing-stars-from-a-string.cpp`](../2390-removing-stars-from-a-string.cpp)
