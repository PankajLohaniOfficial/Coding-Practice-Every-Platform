# 577. Employee Bonus

**Difficulty:** Easy  
**Topics:** SQL  
**Link:** [LeetCode #577](https://leetcode.com/problems/employee-bonus/)

## 🧩 Problem Description

### Table: `Employee`

| Column Name | Type    |
| ----------- | ------- |
| empId       | int     |
| name        | varchar |
| supervisor  | int     |
| salary      | int     |

- `empId` is the primary key for this table.
- Each row represents an employee's details including name, supervisor ID, and salary.

---

### Table: `Bonus`

| Column Name | Type |
| ----------- | ---- |
| empId       | int  |
| bonus       | int  |

- `empId` is a foreign key referencing `Employee.empId`.
- Each row contains an employee's bonus.

---

## 🎯 Objective

Write a SQL query to **report the name and bonus amount of each employee whose bonus is less than 1000 or is NULL**.

- Return the result table in any order.

---

## 🧪 Example

### Input

**Employee table:**

| empId | name   | supervisor | salary |
| ----- | ------ | ---------- | ------ |
| 3     | Brad   | null       | 4000   |
| 1     | John   | 3          | 1000   |
| 2     | Dan    | 3          | 2000   |
| 4     | Thomas | 3          | 4000   |

**Bonus table:**

| empId | bonus |
| ----- | ----- |
| 2     | 500   |
| 4     | 2000  |

---

### Output

| name | bonus |
| ---- | ----- |
| Brad | null  |
| John | null  |
| Dan  | 500   |

---
