# Two Sum

## Description

Given an array of integers `nums` and an integer `target`, return the indices of the two numbers that add up to `target`.

**Constraints:**

- Each input has exactly one solution
- You cannot use the same element twice
- The answer can be returned in any order

## Examples

### Example 1

**Input:** `nums = [2,7,11,15]`, `target = 9`  
**Output:** `[0,1]`  
**Explanation:** `nums[0] + nums[1] = 2 + 7 = 9`

### Example 2

**Input:** `nums = [3,2,4]`, `target = 6`  
**Output:** `[1,2]`

### Example 3

**Input:** `nums = [3,3]`, `target = 6`  
**Output:** `[0,1]`

## Constraints

- `2 <= nums.length <= 10⁴`
- `-10⁹ <= nums[i] <= 10⁹`
- `-10⁹ <= target <= 10⁹`
- Only one valid answer exists

## Follow-up

Can you solve this with better than **O(n²)** time complexity?

## Solution

### Algorithm: Hash Map Approach

**Time Complexity:** O(n)  
**Space Complexity:** O(n)

#### Approach

1. Create a hash map to store `value → index` pairs
2. Iterate through the array with index `i`:
   - Calculate `complement = target - nums[i]`
   - If `complement` exists in the hash map, return `[hash_map[complement], i]`
   - Otherwise, store `nums[i] → i` in the hash map
3. Return empty array if no pair is found

#### Why This Works

By using a hash map, we can check if the complement exists in O(1) time, reducing the overall complexity from O(n²) to O(n).
