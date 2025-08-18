# 🚀 LeetCode 26 – Remove Duplicates from Sorted Array

![LeetCode](https://img.shields.io/badge/LeetCode-Problem%2026-orange)
![Language](https://img.shields.io/badge/Language-C++-blue)
![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## 📌 Problem Statement

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once.  
The relative order of the elements should be kept the same.

Return the number of unique elements in `nums`.  
The first `k` elements of `nums` should contain the final result.

---

## 🔹 Example 1

**Input**
nums = [1,1,2]

**Output**
2, nums = [1,2,_]

---

## 🔹 Example 2

**Input**
nums = [0,0,1,1,1,2,2,3,3,4]

**Output**
5, nums = [0,1,2,3,4,,,,,_]

---

## ✅ Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing order**

---

## 💡 Approach

We use the **two-pointer technique**:

- One pointer (`i`) keeps track of the last unique element.
- The other pointer (`j`) scans through the array.
- When a new unique element is found, it is placed at the correct position.
- At the end, `i + 1` gives the number of unique elements.

This ensures:

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---
