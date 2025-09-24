# 1683. Invalid Tweets

> **Difficulty:** Easy  
> **Tag(s):** SQL, MySQL

## 🧩 Problem Statement

Table: `Tweets`

| Column Name | Type    |
| ----------- | ------- |
| tweet_id    | int     |
| content     | varchar |

- `tweet_id` is the **primary key** (column with unique values) for this table.
- `content` consists of **alphanumeric characters**, `'!'`, or `' '` and **no other special characters**.
- This table contains all the tweets in a social media app.

---

## ❓ Task

Write a solution to find the IDs of the **invalid tweets**.  
A tweet is **invalid** if the number of characters used in the `content` of the tweet is **strictly greater than 15**.

Return the result table **in any order**.

---

## 💡 Example

**Input:**  
Table: `Tweets`

| tweet_id | content                           |
| -------- | --------------------------------- |
| 1        | Let us Code                       |
| 2        | More than fifteen chars are here! |

**Output:**

| tweet_id |
| -------- |
| 2        |

**Explanation:**

- Tweet 1 has length = 11 → ✅ Valid
- Tweet 2 has length = 33 → ❌ Invalid (more than 15 characters)

---
