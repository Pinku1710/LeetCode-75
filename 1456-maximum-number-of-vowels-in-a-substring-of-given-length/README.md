# 1456. Maximum Number of Vowels in a Substring of Given Length

- **Platform:** LeetCode
- **Difficulty:** Medium
- **Topic:** Sliding Window, String
- **Language:** C++

## Problem

Given a string `s` and an integer `k`, return the maximum number of vowel letters in any substring of `s` with length `k`.

Vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`.

## Approach: Sliding Window

1. Count the vowels in the first window of size `k`.
2. Slide the window one position at a time.
3. Remove the outgoing character's contribution from the count.
4. Add the incoming character's contribution.
5. Update the maximum vowel count after each move.

## Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Example

**Input:** `s = "abciiidef", k = 3`

**Output:** `3`

**Explanation:** The substring `"iii"` contains three vowels, which is the maximum possible.

## Key Learning

The sliding window technique efficiently solves fixed-size substring problems without recounting every character in each window.

## Solution

See the C++ solution in `1456-maximum-number-of-vowels-in-a-substring-of-given-length.cpp`.
