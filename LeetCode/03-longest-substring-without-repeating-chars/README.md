# Longest Substring Without Repeating Characters

**Difficulty:** Medium

## Problem Description

Given a string `s`, find the length of the longest substring without duplicate characters.

## Examples

| #   | Input        | Output | Explanation                                                                                 |
| --- | ------------ | ------ | ------------------------------------------------------------------------------------------- |
| 1   | `"abcabcbb"` | `3`    | The answer is `"abc"`, with length 3. Note that `"bca"` and `"cab"` are also valid answers. |
| 2   | `"bbbbb"`    | `1`    | The answer is `"b"`, with length 1.                                                         |
| 3   | `"pwwkew"`   | `3`    | The answer is `"wke"`, with length 3. Note that `"pwke"` is a subsequence, not a substring. |

## Constraints

- `0 <= s.length <= 5 * 10⁴`
- `s` consists of English letters, digits, symbols, and spaces

## Approach

Use a **sliding window** with a hash map/set to track character positions and expand/contract the window to find the longest substring.

## Solution Pseudocode

**Algorithm:** Sliding Window

**Input:** string `s`  
**Output:** integer (length of longest substring without repeating characters)

1. If `s` is empty, return `0`
2. Create a hash map to store character → index pairs
3. Initialize `maxLen = 0`, `left = 0`
4. For each character at `right` pointer in string:
   - If character exists in hash map: move `left` to `max(left, last_index + 1)`
   - Update hash map with current character and index
   - Calculate window length: `right - left + 1`
   - Update `maxLen = max(maxLen, window_length)`
5. Return `maxLen`

**Time Complexity:** O(n)  
**Space Complexity:** O(min(n, m)) where m is charset size
