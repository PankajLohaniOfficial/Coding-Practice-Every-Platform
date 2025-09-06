# Sort Colors (LeetCode #75)

## 🧩 Problem Description

Given an array `nums` with `n` objects colored red, white, or blue, sort them **in-place** so that objects of the same color are adjacent, with the colors in the order **red (0)**, **white (1)**, and **blue (2)**.

We use the integers:

- `0` to represent red,
- `1` to represent white,
- `2` to represent blue.

You **must not** use the built-in sort function — implement your own in-place sorting.

---

## 🔒 Problem Link

> This problem is available on [LeetCode - Sort Colors](https://leetcode.com/problems/sort-colors/)

---

## 📥 Input

- An integer array `nums`.
- `n == nums.length`
- `1 <= n <= 300`
- Each `nums[i]` is either `0`, `1`, or `2`.

---

## 📤 Output

- The sorted array with all `0`s first, followed by `1`s, and all `2`s at the end.

---

## 🧪 Examples

### Example 1:

```text
Input:  nums = [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]
```
