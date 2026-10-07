# LeetCode 1679 - Max Number of K-Sum Pairs

**Difficulty:** Medium  
**Problem:** [Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/)  
**Language:** C++  
**Pattern:** Sorting + Two Pointers

## Problem

Given an integer array `nums` and an integer `k`, return the maximum number of operations you can perform.

In each operation, you can choose two numbers whose sum is equal to `k` and remove them from the array.

Each number can be used at most once.

## Approach

We first sort the array and use two pointers:

- `left` points to the smallest element.
- `right` points to the largest element.
- If `nums[left] + nums[right] == k`, we found a valid pair.
- If the sum is less than `k`, move `left` forward to increase the sum.
- If the sum is greater than `k`, move `right` backward to decrease the sum.
- Continue until `left >= right`.

## Complexity

- **Time Complexity:** `O(n log n)` due to sorting.
- **Space Complexity:** `O(1)` extra space.

## C++ Solution

```cpp
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;
        int operations = 0;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == k) {
                operations++;
                left++;
                right--;
            }
            else if (sum < k) {
                left++;
            }
            else {
                right--;
            }
        }

        return operations;
    }
};
```

## Key Takeaway

When we need to find the maximum number of pairs with a specific target sum, **sorting + two pointers** is an efficient and interview-friendly approach.
