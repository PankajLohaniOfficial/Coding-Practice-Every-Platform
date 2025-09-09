# 1317. Convert Integer to the Sum of Two No-Zero Integers

[LeetCode Link](https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/)  
**Difficulty:** Easy

## Description

A **No-Zero integer** is a positive integer that **does not contain any 0** in its decimal representation.

Given an integer `n`, return a list of two integers `[a, b]` where:

- Both `a` and `b` are **No-Zero integers**.
- The sum of `a` and `b` is equal to `n`.

> The test cases are generated so that there is at least one valid solution.  
> If there are multiple valid solutions, any of them is acceptable.

---

## Example 1

Input: n = 2
Output: [1, 1]

Explanation:
Let a = 1 and b = 1.
Both are no-zero integers and a + b = 2.

## Example 2

Input: n = 11
Output: [2, 9]

Explanation:
Let a = 2 and b = 9.
Both are no-zero integers and a + b = 11.
Other valid answers such as [3, 8] or [4, 7] are also acceptable.

---

## Constraints

- `2 <= n <= 10^4`

---

**Topics**

-Math
-Brute Force
-String

---
