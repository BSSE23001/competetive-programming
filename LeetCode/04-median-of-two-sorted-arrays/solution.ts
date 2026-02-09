function findMedianSortedArrays(nums1: number[], nums2: number[]): number {
  if (nums1.length > nums2.length) {
    return findMedianSortedArrays(nums2, nums1);
  }

  const m = nums1.length;
  const n = nums2.length;
  const half = Math.floor((n + m + 1) / 2);
  let low = 0;
  let high = m;

  while (low <= high) {
    const mid1 = low + Math.floor((high - low) / 2);
    const mid2 = half - mid1;

    const l1 = mid1 === 0 ? -Infinity : nums1[mid1 - 1];
    const r1 = mid1 === m ? Infinity : nums1[mid1];
    const l2 = mid2 === 0 ? -Infinity : nums2[mid2 - 1];
    const r2 = mid2 === n ? Infinity : nums2[mid2];

    if (l1 <= r2 && l2 <= r1) {
      if ((m + n) % 2) {
        return Math.max(l1, l2);
      } else {
        return (Math.max(l1, l2) + Math.min(r1, r2)) / 2;
      }
    } else if (l1 > r2) {
      high = mid1 - 1;
    } else {
      low = mid1 + 1;
    }
  }

  return 0;
}
