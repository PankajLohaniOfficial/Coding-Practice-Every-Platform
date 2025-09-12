# 🧮 LeetCode Problem 9: Palindrome Number

> **Difficulty:** Easy  
> **Link:** [LeetCode #9 - Palindrome Number](https://leetcode.com/problems/palindrome-number/)

---

## 📝 Problem Statement

Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

A palindrome is a number that reads the same **backward as forward**.

---

## 📘 Examples

### Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

### Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

### Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

---

## ✅ Constraints

- `-2³¹ <= x <= 2³¹ - 1`

---

## 💡 Solution (C++)

Efficient approach that reverses only half of the number to avoid integer overflow and extra space:

```cpp
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;

        int original = x;
        long reversed = 0;

        while (x > 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};
```
