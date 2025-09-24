# 1378. Replace Employee ID With The Unique Identifier

> **Difficulty:** Easy  
> **Tag(s):** SQL  
> **Companies:** _Premium-only_

---

## 🧩 Problem Statement

You are given two tables:

### Table: `Employees`

| Column Name | Type    |
| ----------- | ------- |
| id          | int     |
| name        | varchar |

- `id` is the **primary key**.
- Each row contains the ID and name of an employee.

---

### Table: `EmployeeUNI`

| Column Name | Type |
| ----------- | ---- |
| id          | int  |
| unique_id   | int  |

- The **combination** of `id` and `unique_id` is the **primary key**.
- Each row contains an employee ID and their **unique identifier**.

---

## ❓ Task

Write a SQL query to show the `unique_id` of each employee.  
If an employee **does not have** a unique ID, show `NULL` instead.

📝 Return the result table in **any order**.

---

## 💡 Example

### Input:

**Employees** table:

| id  | name     |
| --- | -------- |
| 1   | Alice    |
| 7   | Bob      |
| 11  | Meir     |
| 90  | Winston  |
| 3   | Jonathan |

**EmployeeUNI** table:

| id  | unique_id |
| --- | --------- |
| 3   | 1         |
| 11  | 2         |
| 90  | 3         |

---

### Output:

| unique_id | name     |
| --------- | -------- |
| NULL      | Alice    |
| NULL      | Bob      |
| 2         | Meir     |
| 3         | Winston  |
| 1         | Jonathan |

---
