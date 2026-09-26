# 1071. Greatest Common Divisor of Strings

**LeetCode 75 – Interview Question**

**Difficulty:** Easy

## Problem

Given two strings `str1` and `str2`, find the largest string that can divide both strings by repeating itself one or more times.

## Approach

First, check whether:

```text
str1 + str2 == str2 + str1
```

If this condition is false, there is no common divisor string, so return `""`.

If the condition is true, find the GCD of the lengths of both strings. Then return the prefix of `str1` having that length.

## Example

```text
Input:
str1 = "ABABAB"
str2 = "ABAB"

Output:
"AB"
```

## Complexity

- **Time:** O(n + m)
- **Space:** O(n + m)

where `n` and `m` are the lengths of `str1` and `str2`.

## Solution

See [`solution.cpp`](solution.cpp).

## LeetCode

Problem: **1071. Greatest Common Divisor of Strings**
