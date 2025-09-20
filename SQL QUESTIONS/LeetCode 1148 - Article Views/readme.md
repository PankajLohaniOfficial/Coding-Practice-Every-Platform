# LeetCode 1148 - Find Authors Who Viewed Their Own Articles

[LeetCode 1148 - Find Authors Who Viewed Their Own Articles](https://leetcode.com/problems/find-authors-who-viewed-their-own-articles/)

---

## Problem Description

You are given a table named `Views` that logs the views of articles by various viewers. Each row in this table represents an article being viewed by a viewer, where a viewer may be an author themselves.

---

### Table: Views

| Column Name | Type |
| ----------- | ---- |
| article_id  | int  |
| author_id   | int  |
| viewer_id   | int  |
| view_date   | date |

- `article_id`: ID of the article.
- `author_id`: ID of the author who wrote the article.
- `viewer_id`: ID of the viewer who viewed the article.
- `view_date`: Date on which the article was viewed.

Note that there is no primary key in the table, so the table may contain duplicate rows. Also, when `author_id` and `viewer_id` are the same, it means the author has viewed their own article.

---

### Task

Write a SQL query to find all the authors who have viewed at least one of their own articles.

---

### Output

You need to return the list of `author_id` values, where each author has viewed at least one of their own articles. The result should be sorted by `author_id` in ascending order.

---

### Example

#### Input

| article_id | author_id | viewer_id | view_date  |
| ---------- | --------- | --------- | ---------- |
| 1          | 3         | 5         | 2019-08-01 |
| 1          | 3         | 6         | 2019-08-02 |
| 2          | 7         | 7         | 2019-08-01 |
| 2          | 7         | 6         | 2019-08-02 |
| 4          | 7         | 1         | 2019-07-22 |
| 3          | 4         | 4         | 2019-07-21 |
| 3          | 4         | 4         | 2019-07-21 |

#### Output

| id  |
| --- |
| 4   |
| 7   |
