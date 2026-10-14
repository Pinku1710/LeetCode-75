# LeetCode 2215 — Find the Difference of Two Arrays

**Difficulty:** Easy  
**Topics:** Array, Hash Set  
**Language:** C++

## Problem Description

Given two integer arrays `nums1` and `nums2`, return a list containing two arrays:

- `answer[0]` contains distinct integers present in `nums1` but not in `nums2`.
- `answer[1]` contains distinct integers present in `nums2` but not in `nums1`.

## Approach: Hash Set

1. Convert both arrays into `unordered_set` to store unique elements.
2. Traverse the first set and add elements absent from the second set to `answer1`.
3. Traverse the second set and add elements absent from the first set to `answer2`.
4. Return `{answer1, answer2}`.

## C++ Solution

```cpp
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> answer1, answer2;

        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                answer1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                answer2.push_back(num);
            }
        }

        return {answer1, answer2};
    }
};
```

## Example

**Input**
```text
nums1 = [1, 2, 3]
nums2 = [2, 4, 6]
```

**Output**
```text
[[1, 3], [4, 6]]
```

**Explanation:** `1` and `3` occur only in `nums1`, while `4` and `6` occur only in `nums2`. The number `2` is common to both arrays.

## Complexity Analysis

- **Time Complexity:** Average O(n + m)
- **Space Complexity:** O(n + m)

Here, `n` and `m` are the lengths of `nums1` and `nums2`.

## Key Learnings

- Using `unordered_set` for fast average-case lookups.
- Removing duplicates automatically with sets.
- Finding distinct elements between two arrays.

**Status:** Solved ✅
