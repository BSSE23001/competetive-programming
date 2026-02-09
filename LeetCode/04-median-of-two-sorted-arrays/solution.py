def findMedianSortedArrays(nums1: list[int], nums2: list[int]) -> float:
    if len(nums1) > len(nums2):
        return findMedianSortedArrays(nums2, nums1)
    
    m, n = len(nums1), len(nums2)
    half = (n + m + 1) // 2
    low, high = 0, m
    
    while low <= high:
        mid1 = low + (high - low) // 2
        mid2 = half - mid1
        
        l1 = float('-inf') if mid1 == 0 else nums1[mid1 - 1]
        r1 = float('inf') if mid1 == m else nums1[mid1]
        l2 = float('-inf') if mid2 == 0 else nums2[mid2 - 1]
        r2 = float('inf') if mid2 == n else nums2[mid2]
        
        if l1 <= r2 and l2 <= r1:
            if (m + n) % 2:
                return float(max(l1, l2))
            else:
                return (max(l1, l2) + min(r1, r2)) / 2.0
        elif l1 > r2:
            high = mid1 - 1
        else:
            low = mid1 + 1
    
    return 0.0
