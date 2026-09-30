# 151. Reverse Words in a String

## Problem
Given a string `s`, reverse the order of its words.

The output should contain:
- Words in reverse order
- Only one space between words
- No leading or trailing spaces

## Approach

Traverse the string from right to left.

1. Skip unnecessary spaces.
2. Find each complete word.
3. Add the word to the result.
4. Add a single space between words.

## Complexity

- Time Complexity: `O(n)`
- Space Complexity: `O(n)`

## Language

C++
