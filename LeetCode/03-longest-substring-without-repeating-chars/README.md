# Longest Substring Without Repeating Characters

**Difficulty:** Medium

## Problem Description

Given a string `s`, find the length of the longest substring without duplicate characters.

## Examples

### Example 1

```md
Input: s = "abcabcbb"
Output: 3
```

**Explanation:** The answer is `"abc"`, with length 3. Note that `"bca"` and `"cab"` are also valid answers.

### Example 2

```md
Input: s = "bbbbb"
Output: 1
```

**Explanation:** The answer is `"b"`, with length 1.

### Example 3

```md
Input: s = "pwwkew"
Output: 3
```

**Explanation:** The answer is `"wke"`, with length 3. Note that `"pwke"` is a subsequence, not a substring.

## Constraints

- `0 <= s.length <= 5 * 10⁴`
- `s` consists of English letters, digits, symbols, and spaces

## Approach

Use a **sliding window** with a hash map/set to track character positions and expand/contract the window to find the longest substring.

## Solutions

### Optimal Solution: Sliding Window + Hash Map

- **Time Complexity:** O(n)
- **Space Complexity:** O(min(m, n)) where m is charset size
