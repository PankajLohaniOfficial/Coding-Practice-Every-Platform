# Longest Subarray with Sum K

## Problem Description

**Difficulty**: Medium

Given an array `arr[]` containing integers and an integer `k`, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value `k`. If there is no subarray with sum equal to `k`, return `0`.

---

## Problem Statement

### Input:

- An integer array `arr[]` of size `n` where \(1 \leq n \leq 10^5\).
- An integer `k` which represents the target sum.

### Output:

- An integer representing the length of the longest subarray where the sum of its elements is equal to `k`. If no such subarray exists, return `0`.

---

## Examples

### Example 1:

**Input**:
arr[] = [10, 5, 2, 7, 1, -10], k = 15
**Output**:
6

**Explanation**:  
Subarrays with sum = 15 are:

- `[5, 2, 7, 1]`
- `[10, 5]`
- `[10, 5, 2, 7, 1, -10]`

The length of the longest subarray with sum 15 is `6`.

---

### Example 2:

**Input**:
arr[] = [-5, 8, -14, 2, 4, 12], k = -5

**Output**:
5

**Explanation**:  
Only subarray with sum = -5 is `[-5, 8, -14, 2, 4]` of length `5`.

---

### Example 3:

**Input**:
arr[] = [10, -10, 20, 30], k = 5

**Output**:
0

**Explanation**:  
No subarray with sum = 5 is present in `arr[]`.

---

## Constraints:

- \(1 \leq arr.size() \leq 10^5\)
- \(-10^4 \leq arr[i] \leq 10^4\)
- \(-10^9 \leq k \leq 10^9\)

---
