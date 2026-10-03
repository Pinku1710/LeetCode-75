# 443. String Compression

**Difficulty:** Medium  
**Topic:** Array / Two Pointers  
**Language:** C++

## Problem
Given an array of characters, compress it in-place using the following rules:

- Consecutive repeating characters are replaced by the character followed by its count.
- If a character appears only once, its count is not written.
- Return the new length of the compressed array.

## Approach

Use two pointers:

- `i` → scans the original array and counts consecutive characters.
- `write` → writes the compressed result back into the array.

For each group of identical characters:
1. Store the current character.
2. Count how many times it occurs consecutively.
3. Write the character at the `write` position.
4. If the count is greater than `1`, convert the count to a string and write each digit.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Example

Input:
`['a','a','b','b','c','c','c']`

Compressed:
`['a','2','b','2','c','3']`

Return:
`6`
