# 1890. The Latest Login in 2020

**Difficulty:** Easy  
**Topics:** SQL  
**Link:** [LeetCode #1890](https://leetcode.com/problems/the-latest-login-in-2020/)

---

## 🧩 Problem Description

### Table: `Logins`

| Column Name | Type     |
| ----------- | -------- |
| user_id     | int      |
| time_stamp  | datetime |

- The combination `(user_id, time_stamp)` is the primary key.
- Each row logs a user's login time.

---

## 🎯 Objective

Write a SQL query to **report the latest login** for **each user who logged in during the year 2020**.

- Do **not** include users who did **not** log in at all in 2020.
- Return the result in any order.

---

## 🧪 Example

### Input

**Logins table:**

| user_id | time_stamp          |
| ------- | ------------------- |
| 6       | 2020-06-30 15:06:07 |
| 6       | 2021-04-21 14:06:06 |
| 6       | 2019-03-07 00:18:15 |
| 8       | 2020-02-01 05:10:53 |
| 8       | 2020-12-30 00:46:50 |
| 2       | 2020-01-16 02:49:50 |
| 2       | 2019-08-25 07:59:08 |
| 14      | 2019-07-14 09:00:00 |
| 14      | 2021-01-06 11:59:59 |

---

### Output

| user_id | last_stamp          |
| ------- | ------------------- |
| 6       | 2020-06-30 15:06:07 |
| 8       | 2020-12-30 00:46:50 |
| 2       | 2020-01-16 02:49:50 |

---

### Explanation

- **User 6** logged in during 2019, 2020, and 2021 — only the **2020** login is selected.
- **User 8** logged in **twice in 2020** — the **latest** timestamp is returned.
- **User 2** logged in once in 2020.
- **User 14** did **not** log in during 2020 — they are **excluded** from the result.

---
