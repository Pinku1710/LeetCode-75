# LeetCode 392 - Is Subsequence

## Problem

Given two strings `s` and `t`, return `true` if `s` is a subsequence of `t`, or `false` otherwise.

A subsequence is a string that can be formed by deleting some or none of the characters from another string while maintaining the relative order of the remaining characters.

### Example

**Input:**
```text
s = "abc"
t = "ahbgdc"
```

**Output:**
```text
true
```

**Explanation:**
`"abc"` is a subsequence of `"ahbgdc"` because `a`, `b`, and `c` appear in the same order.

---

## Approach

### Two Pointer Approach

We use two pointers:

- `i` points to the current character of `s`.
- `j` points to the current character of `t`.

If `s[i] == t[j]`, we move `i` forward because we found the required character.

For every character of `t`, we move `j` forward.

At the end, if all characters of `s` have been matched, then `s` is a subsequence of `t`.

---

## Algorithm

1. Initialize `i = 0` and `j = 0`.
2. Traverse both strings using two pointers.
3. If `s[i] == t[j]`, increment `i`.
4. Always increment `j`.
5. Return `true` if `i == s.length()`.
6. Otherwise, return `false`.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

Where `n` is the length of string `t`.

---

## C++ Solution

```cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }

        return i == s.length();
    }
};
```

---

## Key Concept

**Two Pointers**

The important idea is to preserve the order of characters in `s` while scanning through `t`.

---

## LeetCode

**Problem:** 392. Is Subsequence  
**Difficulty:** Easy  
**Language:** C++  
**Topic:** Two Pointers, String  
**Status:** ✅ Solved
