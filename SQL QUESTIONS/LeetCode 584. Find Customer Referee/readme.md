## 🥗 Find Low Fat and Recyclable Products

### 🧾 Table: `Products`

| Column Name | Type |
| ----------- | ---- |
| product_id  | int  |
| low_fats    | enum |
| recyclable  | enum |

- `product_id` is the **primary key** (unique for each product).
- `low_fats` is an **ENUM**: `'Y'` means low fat, `'N'` means not low fat.
- `recyclable` is an **ENUM**: `'Y'` means recyclable, `'N'` means not recyclable.

---

### 🎯 Problem Statement

Write an SQL query to **find the IDs of products that are both low fat and recyclable**.

Return the result table in **any order**.

---

### 🧪 Example

#### Input: `Products` table

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
