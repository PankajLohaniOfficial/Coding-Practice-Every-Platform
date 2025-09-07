# 🗺️ Big Countries – SQL Query

This project solves a SQL problem that identifies **"big countries"** from a dataset containing information about countries, including their area, population, and GDP.

A country is considered **big** if:

- Its **area** is at least `3,000,000 km²`, **or**
- Its **population** is at least `25,000,000`.

---

## 📊 Table: `World`

| Column Name | Type    | Description                            |
| ----------- | ------- | -------------------------------------- |
| name        | varchar | Name of the country (**Primary Key**)  |
| continent   | varchar | Continent to which the country belongs |
| area        | int     | Area in square kilometers              |
| population  | int     | Total population                       |
| gdp         | bigint  | Gross Domestic Product                 |

---

## ✅ Task

Write a SQL query to **find the name, population, and area** of the countries that meet at least **one** of the following criteria:

- `area >= 3000000`
- `population >= 25000000`

Return the result table **in any order**.

---

## 📥 Example Input

**World Table:**

| name        | continent | area    | population | gdp          |
| ----------- | --------- | ------- | ---------- | ------------ |
| Afghanistan | Asia      | 652230  | 25500100   | 20343000000  |
| Albania     | Europe    | 28748   | 2831741    | 12960000000  |
| Algeria     | Africa    | 2381741 | 37100000   | 188681000000 |
| Andorra     | Europe    | 468     | 78115      | 3712000000   |
| Angola      | Africa    | 1246700 | 20609294   | 100990000000 |

---

## 📤 Example Output

| name        | population | area    |
| ----------- | ---------- | ------- |
| Afghanistan | 25500100   | 652230  |
| Algeria     | 37100000   | 2381741 |

---
