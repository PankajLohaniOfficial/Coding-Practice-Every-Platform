# 🧮 1068. Product Sales Analysis I

**Difficulty:** Easy  
**Topics:** SQL  
**Companies:** [Amazon](https://leetcode.com/company/amazon/), [Google](https://leetcode.com/company/google/)

---

## 📘 Question Description

### SQL Schema

#### Table: `Sales`

| Column Name | Type |
| ----------- | ---- |
| sale_id     | int  |
| product_id  | int  |
| year        | int  |
| quantity    | int  |
| price       | int  |

- `(sale_id, year)` is the primary key.
- `product_id` is a foreign key to the `Product` table.
- Each row shows a sale of a product in a specific year.
- The `price` is **per unit**.

#### Table: `Product`

| Column Name  | Type    |
| ------------ | ------- |
| product_id   | int     |
| product_name | varchar |

- `product_id` is the primary key.
- Each row provides the name of a product.

---

## ❓ Problem Statement

Write a SQL query to report the `product_name`, `year`, and `price` for each sale recorded in the `Sales` table.

Return the result in any order.

---

## 🧪 Example

**Input:**

`Sales` table:

| sale_id | product_id | year | quantity | price |
| ------- | ---------- | ---- | -------- | ----- |
| 1       | 100        | 2008 | 10       | 5000  |
| 2       | 100        | 2009 | 12       | 5000  |
| 7       | 200        | 2011 | 15       | 9000  |

`Product` table:

| product_id | product_name |
| ---------- | ------------ |
| 100        | Nokia        |
| 200        | Apple        |
| 300        | Samsung      |

**Output:**

| product_name | year | price |
| ------------ | ---- | ----- |
| Nokia        | 2008 | 5000  |
| Nokia        | 2009 | 5000  |
| Apple        | 2011 | 9000  |

---
