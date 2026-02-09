double FindMedianSortedArrays(int[] nums1, int[] nums2) {
    if (nums1.Length > nums2.Length) {
        return FindMedianSortedArrays(nums2, nums1);
    }
    
    int m = nums1.Length, n = nums2.Length;
    int half = (n + m + 1) / 2, low = 0, high = m;
    
    while (low <= high) {
        int mid1 = low + ((high - low) / 2);
        int mid2 = half - mid1;
        
        int l1 = (mid1 > 0) ? nums1[mid1 - 1] : int.MinValue;
        int l2 = (mid2 > 0) ? nums2[mid2 - 1] : int.MinValue;
        int r1 = (mid1 < m) ? nums1[mid1] : int.MaxValue;
        int r2 = (mid2 < n) ? nums2[mid2] : int.MaxValue;
        
        if (l1 <= r2 && l2 <= r1) {
            if ((m + n) % 2 == 1) {
                return Math.Max(l1, l2);
            }
            return (Math.Max(l1, l2) + Math.Min(r1, r2)) / 2.0;
        }
        
        if (l1 > r2) {
            high = mid1 - 1;
        } else {
            low = mid1 + 1;
        }
    }
    
    return 0.0;
}
