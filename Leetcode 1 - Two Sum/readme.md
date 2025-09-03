# 🧮 LeetCode Problem 1: Two Sum

## 📌 Problem Statement

Given an array of integers `nums` and an integer `target`, return the **indices** of the two numbers such that they add up to `target`.

- You may assume that each input would have **exactly one solution**.
- You may not use the same element twice.
- You can return the answer in any order.

---

## ✨ Examples

### Example 1:

**Input:**  
nums = [2,7,11,15], target = 9

**Output:**  
**Explanation:**  
Because `nums[0] + nums[1] == 9`, we return `[0, 1]`.

---

### Example 2:

**Input:**  
nums = [3,2,4], target = 6

**Output:**  
[1,2]

---

### Example 3:

**Input:**  
nums = [3,3], target = 6

**Output:**  
[0,1]

---

## ✅ Constraints

- `2 <= nums.length <= 10^4`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`
- **Only one valid answer exists**

---

## 💡 Approach

1. **Brute Force (O(n²))**

   - Use two nested loops, check every pair.
   - Time complexity: `O(n²)` → inefficient for large input.

2. **Optimized (Hash Map, O(n))** ✅
   - Use a hash map to store elements and their indices.
   - For each element, check if `target - nums[i]` exists in the map.
   - If yes, return the indices.

---

# 📊 Complexity Analysis

- Time Complexity: O(n) (each element visited once)

- Space Complexity: O(n) (hash map storage)
