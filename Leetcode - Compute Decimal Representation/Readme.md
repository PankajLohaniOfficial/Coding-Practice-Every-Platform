## Q1. Compute Decimal Representation

**Status:** Solved  
**Difficulty:** Easy  
**Weekly Contest 469:**
**Points:** 3 pt.

---

You are given a positive integer `n`.

A positive integer is a **base-10 component** if it is the product of:

- a single digit from 1 to 9, **and**
- a non-negative power of 10.

**Examples of base-10 components:**  
`500`, `30`, and `7` are base-10 components.  
**Examples of non-base-10 components:**  
`537`, `102`, and `11`.

---

### Task

Express `n` as a sum of only base-10 components, using the **fewest** base-10 components possible.

Return an array containing these base-10 components in **descending order**.

---

### Examples

#### Example 1:

**Input:**  
`n = 537`  
**Output:**  
`[500, 30, 7]`  
**Explanation:**  
We can express 537 as `500 + 30 + 7`.  
It is impossible to express 537 using fewer than 3 base-10 components.

---

#### Example 2:

**Input:**  
`n = 102`  
**Output:**  
`[100, 2]`  
**Explanation:**  
We can express 102 as `100 + 2`.  
102 itself is **not** a base-10 component, so at least 2 are required.

---

#### Example 3:

**Input:**  
`n = 6`  
**Output:**  
`[6]`  
**Explanation:**  
6 is already a base-10 component.

---

### Constraints

- `1 <= n <= 10^9`
