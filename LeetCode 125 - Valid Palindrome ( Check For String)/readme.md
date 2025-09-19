# LeetCode Problem 125: Valid Palindrome

## Problem Statement

Given a string `s`, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

**Note:**

- For this problem, we define a palindrome as a word, phrase, number, or other sequence of characters that reads the same forward and backward (ignoring spaces, punctuation, and capitalization).
- Only alphanumeric characters are considered in the palindrome check. That means spaces, punctuation, and other symbols should be ignored.

---

### Example 1:

**Input:**

```plaintext
s = "A man, a plan, a canal: Panama"
```
Output:
true

**Explanation:**
"amanaplanacanalpanama" is a palindrome after ignoring non-alphanumeric characters and converting to lowercase.

---

### Example 2:

Input:
```plaintext
s = "race a car"
```

**Output:**
false


**Explanation:**
"raceacar" is not a palindrome.

---

### Example 3:

**Input:**
```plaintext
s = " "
```

**Output:**
true


**Explanation:**

An empty string is considered a palindrome.

---

## Constraints:

- 1 <= s.length <= 2 * 10^5

- s consists of printable ASCII characters.
