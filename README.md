# Two Sum

## Project Overview
Project 0 is an introduction to solving the classic **Two Sum Problem**, a fundamental algorithmic challenge commonly used in coding interviews and algorithm courses.

## Problem Description
Given an array of integers `nums` and an integer `target`, find the indices of two numbers that add up to the target value. You may assume each input has exactly one solution, and you cannot use the same element twice.

### Example
```
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] = 2 + 7 = 9
```

## Learning Objectives
- Understand basic array manipulation and indexing
- Implement efficient algorithms to solve problems
- Compare different approaches (brute force vs. optimized solutions)
- Practice using hash maps/dictionaries for improved time complexity

## Approach
The most efficient solution uses a **hash map** to store previously seen numbers and their indices, allowing us to find the complement in O(n) time complexity instead of O(n²).

