# LeetCode 345 - Reverse Vowels of a String

**Difficulty:** Easy  
**Topic:** Two Pointers  
**Language:** C++

## Problem

Given a string `s`, reverse only the vowels in the string and return the resulting string.

Vowels are:

`a, e, i, o, u` and their uppercase versions.

### Example

**Input:**
```text
s = "hello"
```

**Output:**
```text
"holle"
```

## Approach

We use the **Two Pointer** technique.

1. Set one pointer at the beginning of the string.
2. Set another pointer at the end.
3. Move the left pointer until it finds a vowel.
4. Move the right pointer until it finds a vowel.
5. Swap the two vowels.
6. Move both pointers inward.
7. Repeat until the pointers meet.

## Complexity

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

## Key Concept

This problem is a good practice for the **Two Pointer** technique, which is commonly used for string and array problems.
