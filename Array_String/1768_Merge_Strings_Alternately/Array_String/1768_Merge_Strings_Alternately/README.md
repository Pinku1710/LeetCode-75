# 1768. Merge Strings Alternately

**LeetCode 75 — Day 01**

## Problem

Given two strings `word1` and `word2`, merge them by adding their characters in alternating order, starting with `word1`.

If one string is longer than the other, append the remaining characters at the end.

## Examples

### Example 1

```text
Input:
word1 = "abc"
word2 = "pqr"

Output:
"apbqcr"
```

### Example 2

```text
Input:
word1 = "ab"
word2 = "pqrs"

Output:
"apbqrs"
```

### Example 3

```text
Input:
word1 = "abcd"
word2 = "pq"

Output:
"apbqcd"
```

## Approach

Use two pointers, one for each string.

- Start from the first character of both strings.
- Add one character from `word1`.
- Then add one character from `word2`.
- Continue until both strings are completely processed.
- If one string is longer, its remaining characters are automatically added.

## Complexity

- **Time Complexity:** O(n + m)
- **Space Complexity:** O(n + m)

where `n` and `m` are the lengths of `word1` and `word2`.

## Language

C++

## LeetCode

[1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/)
