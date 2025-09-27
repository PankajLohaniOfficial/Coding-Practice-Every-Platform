# 🚀 Bit++

This repository contains the solution to the **Bit++** problem from [Codeforces](https://codeforces.com/problemset/problem/282/A).

---

## 📖 Problem Statement

The classic programming language of Bitland is Bit++.  
This language is peculiar because it has exactly one variable `x`. Initially, `x = 0`.

There are only two possible operations:

- `++` → increases the value of `x` by **1**
- `--` → decreases the value of `x` by **1**

Each statement in the program contains **exactly one operation** (`++` or `--`) and the variable `x`.  
Examples of valid statements:
++X
X++
--X
X--

A program is a sequence of such statements, and executing it means applying all operations in order.

Your task is to **find the final value of `x` after executing all statements**.

---

## 📝 Input Format

1. The first line contains an integer `n (1 ≤ n ≤ 150)` — the number of statements.
2. The next `n` lines each contain a single statement.

---

## 📝 Output Format

Print a single integer — the final value of `x`.

---

## 🔍 Examples

### Example 1

**Input**
1
++X

**Output**
1

---

### Example 2

**Input**
2
X++
--X

**Output**
0
