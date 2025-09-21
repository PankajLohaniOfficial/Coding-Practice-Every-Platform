# Problem: 3683. Earliest Time to Finish One Task

---

## Problem Description

You are given a 2D integer array `tasks`, where `tasks[i] = [si, ti]` represents a task with:

- `si` = start time of the task,
- `ti` = time it takes to finish the task.

Your task is to **return the earliest time at which at least one task is finished**.

---

## Function Signature

```cpp
int earliestTime(vector<vector<int>>& tasks);
```

---

## Input

### tasks:

A vector of vectors, where each inner vector contains two integers [si, ti] representing the start time and duration of a task.

- 1 <= tasks.length <= 100

- 1 <= si, ti <= 100

## Output

Return an integer representing the earliest finish time among all the tasks.

---

## Example 1

### Input:

```cpp
tasks = [[1, 6], [2, 3]]
```

Output:
5

### Explanation:

- Task 1 starts at time t = 1 and finishes at time 1 + 6 = 7.

- Task 2 finishes at time 2 + 3 = 5.

- The earliest time at which at least one task finishes is 5.

---

## Example 2

### Input:

tasks = [[100, 100], [100, 100], [100, 100]]

### Output:

200

### Explanation:

- All three tasks finish at time 100 + 100 = 200.

- The earliest time at which at least one task finishes is 200.

---
