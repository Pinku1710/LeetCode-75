LeetCode 394 - Decode String
Problem
Problem Number: 394
Problem Name: Decode String
Platform: LeetCode
Difficulty: Medium
Language: C++
Topic: Stack, String
Problem Description

Given an encoded string, return its decoded string.

The encoding rule is k[encoded_string], where the encoded string inside the square brackets is repeated exactly k times.

The input string is always valid, and there are no extra spaces.

Example 1

Input:

s = "3[a]2[bc]"


Output:

"aaabcbc"

Example 2

Input:

s = "3[a2[c]]"


Output:

"accaccacc"

Approach: Stack
Use a stack to store repetition counts.
Use another stack to store previous strings.
Build the current number when digits are encountered.
When [ is encountered, push the current state onto the stacks.
When ] is encountered, repeat the current string the required number of times and append it to the previous string.
Return the decoded string.
Complexity Analysis
Time Complexity: O(n + k), where n is the input length and k is the decoded output length.
Space Complexity: O(n + k), including stacks and the decoded output.
Solution

File: 394_Decode_String.cpp

The C++ solution is available in this repository.

Topics

Stack String LeetCode C++ Problem Solving

Happy Coding! 🚀
