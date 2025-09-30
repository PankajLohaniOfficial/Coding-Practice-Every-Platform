## 💡 197. Rising Temperature

**Difficulty:** Easy  
**Tags:** SQL, Self Join, Window Functions

---

### 🧾 Problem Description

Table: `Weather`
+---------------+---------+
| Column Name | Type |
+---------------+---------+
| id | int |
| recordDate | date |
| temperature | int |
+---------------+---------+

- `id` is the unique identifier for each row.
- There are no duplicate `recordDate` values.
- This table contains daily temperature records.

---

### 📌 Task

Write an SQL query to find all **`id`s** where the temperature was **higher than the previous day**.

Return the result table in **any order**.

---

### 📈 Example

#### Input:

+----+------------+-------------+
| id | recordDate | temperature |
+----+------------+-------------+
| 1 | 2015-01-01 | 10 |
| 2 | 2015-01-02 | 25 |
| 3 | 2015-01-03 | 20 |
| 4 | 2015-01-04 | 30 |
+----+------------+-------------+

#### Output:

+----+
| id |
+----+
| 2 |
| 4 |
+----+

#### Explanation:

- On **2015-01-02**, the temperature increased from **10 → 25**.
- On **2015-01-04**, the temperature increased from **20 → 30**.

---
