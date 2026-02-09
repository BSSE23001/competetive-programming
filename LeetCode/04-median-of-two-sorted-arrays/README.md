# Median of Two Sorted Arrays

## Difficulty

🔴 **Hard**

## Problem Statement

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return the median of the two sorted arrays.

### Constraints

- **Time Complexity**: O(log(m+n))
- `nums1.length == m`
- `nums2.length == n`
- `0 <= m <= 1000`
- `0 <= n <= 1000`
- `1 <= m + n <= 2000`
- `-10^6 <= nums1[i], nums2[i] <= 10^6`

## Examples

### Example 1

**Input:** `nums1 = [1,3], nums2 = [2]`
**Output:** `2.00000`
**Explanation:** Merged array = `[1,2,3]`, median = `2`

### Example 2

**Input:** `nums1 = [1,2], nums2 = [3,4]`
**Output:** `2.50000`
**Explanation:** Merged array = `[1,2,3,4]`, median = `(2 + 3) / 2 = 2.5`

## Approach

Use binary search to partition both arrays such that the left half contains exactly `(m+n+1)/2` elements, without merging them.

### Algorithm

1. **Setup**: Ensure `nums1` is the smaller array to optimize binary search
2. **Partition**: Find split points in both arrays where left partition has `(m+n+1)/2` elements
3. **Validate**: Check if `left_max ≤ right_min` across both arrays
4. **Calculate**:
   - Even total length: `(max(l1,l2) + min(r1,r2)) / 2`
   - Odd total length: `max(l1,l2)`
5. **Adjust**: Move partition pointers based on validation until valid partition is found

**Time:** O(log(min(m,n)))  
**Space:** O(1)
