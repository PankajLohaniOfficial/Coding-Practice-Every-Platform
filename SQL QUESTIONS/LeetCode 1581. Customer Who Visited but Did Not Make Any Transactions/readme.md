## Q2. Customer Who Visited but Did Not Make Any Transactions

**Difficulty:** Easy

---

### Table: `Visits`

| Column Name | Type |
| ----------- | ---- |
| visit_id    | int  |
| customer_id | int  |

- `visit_id` is the primary key (unique).
- This table contains information about the customers who visited the mall.

---

### Table: `Transactions`

| Column Name    | Type |
| -------------- | ---- |
| transaction_id | int  |
| visit_id       | int  |
| amount         | int  |

- `transaction_id` is the primary key (unique).
- This table contains information about the transactions made during each visit.

---

### Task

Write an SQL query to **find the IDs of the customers who visited the mall but did not make any transactions**, along with the **number of times** they made such visits.

Return the result table **sorted in any order**.

---

### Example

#### Input

**Visits**

| visit_id | customer_id |
| -------- | ----------- |
| 1        | 23          |
| 2        | 9           |
| 4        | 30          |
| 5        | 54          |
| 6        | 96          |
| 7        | 54          |
| 8        | 54          |

**Transactions**

| transaction_id | visit_id | amount |
| -------------- | -------- | ------ |
| 2              | 5        | 310    |
| 3              | 5        | 300    |
| 9              | 5        | 200    |
| 12             | 1        | 910    |
| 13             | 2        | 970    |

#### Output

| customer_id | count_no_trans |
| ----------- | -------------- |
| 54          | 2              |
| 30          | 1              |
| 96          | 1              |

---

### Explanation

- **Customer 23** visited once and made one transaction → not included.
- **Customer 9** visited once and made one transaction → not included.
- **Customer 30** visited once and made **no** transactions → included.
- **Customer 54** visited three times:
  - Once with transactions (`visit_id` = 5, 3 transactions),
  - **Twice without** any transactions → included with count = 2.
- **Customer 96** visited once with **no** transactions → included.

---
