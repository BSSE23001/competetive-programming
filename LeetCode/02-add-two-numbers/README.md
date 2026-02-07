# Add Two Numbers

**Difficulty:** Medium

## Problem Description

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each node contains a single digit. Add the two numbers and return the sum as a linked list.

**Constraint:** The two numbers do not contain leading zeros, except for the number 0 itself.

## Examples

### Example 1

```md
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807
```

### Example 2

```md
Input: l1 = [0], l2 = [0]
Output: [0]
```

### Example 3

```md
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
Explanation: 9,999,999 + 9,999 = 10,009,998
```

## Constraints

- The number of nodes in each linked list is in the range `[1, 100]`
- `0 <= Node.val <= 9`
- Lists represent numbers without leading zeros

## Approach

Use two pointers to traverse both lists simultaneously, handling carry from addition at each step.

## Complexity Analysis

- **Time Complexity:** O(max(m, n)) where m and n are list lengths
- **Space Complexity:** O(max(m, n)) for the result list
