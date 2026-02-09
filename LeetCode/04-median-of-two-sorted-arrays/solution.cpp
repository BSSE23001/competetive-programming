#include <bits/stdc++.h>

using namespace std;

// Solution 1: This Approach is very Slow and Doesnot fulfil the Time Complexit Criteria
// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     vector<int> results;
//     for(auto a: nums1) {
//         results.push_back(a);
//     }
//     for(auto b: nums2) {
//         results.push_back(b);
//     }
//     sort(results.begin(), results.end());
//     auto size = results.size();
//     double median = 0;
//     if (size % 2 != 0) {
//         median = results[size / 2];
//     } else {
//         int n1 = results[size / 2 - 1];
//         int n2 = results[size / 2];
//         median = (n1 + n2) / 2.0;
//     }
//     return median;
// }

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m = nums1.size(), n = nums2.size();
    if( m > n ){
        return findMedianSortedArrays(nums2, nums1);
    }
    int half = (n + m + 1 ) / 2, low = 0, high = m;
    while( low <= high ){
        int mid1 = low + ((high - low) / 2);
        int mid2 = half - mid1;
        int l1, l2, r1, r2;
        l1 = l2 = INT_MIN;
        r1 = r2 = INT_MAX;

        if( mid1 > 0 ){
            l1 = nums1[mid1 - 1];
        }
        if( mid1 < m ){
            r1 = nums1[mid1];
        }

        if( mid2 > 0 ){
            l2 = nums2[mid2 - 1];
        }
        if( mid2 < n ){
            r2 = nums2[mid2];
        }
        if( l1 <= r2 && l2 <= r1 ){
            if( (m + n) % 2 ){
                return max(l1, l2);
            }
            else{
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
        }
        else if( l1 > r2 ){
            high = mid1 - 1;
        }
        else{
            low = mid1 + 1;
        }
    } 

    return 0.0;
}

int main() {
    vector<int> nums1{1,3};
    vector<int> nums2{2};
    cout<< findMedianSortedArrays(nums1,nums2) << endl;
    return 0;
}