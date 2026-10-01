# 238. Product of Array Except Self

**Difficulty:** Medium  
**Topic:** Array / Prefix & Suffix  
**Language:** C++

## Problem

Given an integer array `nums`, return an array `answer` such that:

`answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The solution should run in **O(n)** time and should not use division.

## Approach

We use the **Prefix Product + Suffix Product** technique.

### Step 1: Prefix Product

For every index `i`, store the product of all elements before `i` in `answer[i]`.

Example:

```text
nums = [1, 2, 3, 4]

Prefix products:
[1, 1, 2, 6]
```

### Step 2: Suffix Product

Traverse the array from right to left.

Maintain a `suffix` product and multiply it with `answer[i]`.

For:

```text
nums = [1, 2, 3, 4]
```

Final answer:

```text
[24, 12, 8, 6]
```

## Complexity

- **Time:** O(n)
- **Space:** O(1) extra space, excluding the output array

## Key Concept

The main idea is:

```text
answer[i] = product of elements before i
          × product of elements after i
```

This avoids division and handles arrays containing zero correctly.

## Solution

See [`0238-product-of-array-except-self.cpp`](./0238-product-of-array-except-self.cpp)
