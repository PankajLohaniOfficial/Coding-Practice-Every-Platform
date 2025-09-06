## 📦 Products Table SQL Challenge

### 🧾 Table: `Products`

| Column Name | Type |
| ----------- | ---- |
| product_id  | int  |
| low_fats    | enum |
| recyclable  | enum |

- `product_id` is the **primary key** (column with unique values) for this table.
- `low_fats` is an **ENUM** of type `('Y', 'N')`, where `'Y'` means this product is low fat.
- `recyclable` is an **ENUM** of type `('Y', 'N')`, where `'Y'` means this product is recyclable.

---

### 🎯 Problem Statement

Write a SQL query to **find the IDs of products that are both low fat and recyclable**.

Return the result table in **any order**.

---

### 🧪 Example 1

#### Input

`Products` table:

| product_id | low_fats | recyclable |
| ---------- | -------- | ---------- |
| 0          | Y        | N          |
| 1          | Y        | Y          |
| 2          | N        | Y          |
| 3          | Y        | Y          |
| 4          | N        | N          |

#### Output

| product_id |
| ---------- |
| 1          |
| 3          |

#### Explanation

Only products with IDs **1** and **3** are **both low fat and recyclable**.

---
