#### Problem Link: https://leetcode.com/problems/two-sum


## Statement: 

Given an array of integers nums and an integer `target`, return indices of the two numbers such that they add up to `target`.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Examples
- Example 1:

```json
"Input": nums = [2,7,11,15], target = 9
"Output": [0,1]
"Output": Because nums[0] + nums[1] == 9, we return [0, 1].
```

- Example 2:

```json
"Input": nums = [3,2,4], target = 6
"Output": [1,2]
```

- Example 3:

```json
"Input": nums = [3,3], target = 6
"Output": [0,1]
```

## Constraints

```
2 <= nums.length <= 105
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.
```

## Solution Approach

#### BruteForce

TC: O(n2)

#### Two-pass Hash Table

To improve our run time complexity, we need a more efficient way to check if the complement exists in the array. If the complement exists, we need to look up its index. What is the best way to maintain a mapping of each element in the array to its index? A hash table.

We reduce the look up time from O(n)O(n) to O(1)O(1) by trading space for speed. A hash table is built exactly for this purpose, it supports fast look up in near constant time. I say "near" because if a collision occurred, a look up could degenerate to O(n)O(n) time. But look up in hash table should be amortized O(1)O(1) time as long as the hash function was chosen carefully.

A simple implementation uses two iterations. In the first iteration, we add each element's value and its index to the table. Then, in the second iteration we check if each element's complement (target - nums[i]target−nums[i]) exists in the table. Beware that the complement must not be nums[i]nums[i] itself!

TC: O(n)
