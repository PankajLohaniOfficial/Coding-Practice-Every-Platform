# 📘 3678. Smallest Absent Positive Greater Than Average

**Difficulty:** Easy  
**Tags:** Array, Math  
**LeetCode Premium Problem**

---

## 🧩 Problem Statement

You are given an integer array `nums`.

Return the **smallest absent positive integer** in `nums` such that it is **strictly greater than the average** of all elements in `nums`.

> The average of an array is defined as the sum of all its elements divided by the number of elements.

---

## 🧠 Example 1

## Input:

nums = [3, 5]

## Output:

6

## Explanation:

- The average is (3 + 5) / 2 = 4.
- The smallest positive integer greater than 4 that is not in the array is 6.

---

## 🧠 Example 2

## Input:

nums = [-1, 1, 2]

## Output:

3

## Explanation:

- Average = (−1 + 1 + 2) / 3 = 0.667
- 1 and 2 are in the array. 3 is the smallest positive integer > 0.667 and not present.

---

## 🧠 Example 3

## Input:

nums = [4, -1]

## Output:

2

## Explanation:

- Average = (4 + (-1)) / 2 = 1.5
- The smallest missing positive number greater than 1.5 is 2.

---

## 🔒 Constraints

- `1 <= nums.length <= 100`
- `-100 <= nums[i] <= 100`

---
