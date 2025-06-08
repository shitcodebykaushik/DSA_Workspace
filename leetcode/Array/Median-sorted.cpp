double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    // Always binary search on smaller array
    if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);

    int m = nums1.size();
    int n = nums2.size();
    int low = 0, high = m;

    while (low <= high) {
        int i = (low + high) / 2;             // Partition index for nums1
        int j = (m + n + 1) / 2 - i;          // Partition index for nums2

        int maxLeftA = (i == 0) ? INT_MIN : nums1[i - 1];
        int minRightA = (i == m) ? INT_MAX : nums1[i];

        int maxLeftB = (j == 0) ? INT_MIN : nums2[j - 1];
        int minRightB = (j == n) ? INT_MAX : nums2[j];

        // Check if we found the correct partition
        if (maxLeftA <= minRightB && maxLeftB <= minRightA) {
            if ((m + n) % 2 == 0) {
                return (max(maxLeftA, maxLeftB) + min(minRightA, minRightB)) / 2.0;
            } else {
                return max(maxLeftA, maxLeftB);
            }
        }
        // i is too big → go left
        else if (maxLeftA > minRightB) {
            high = i - 1;
        }
        // i is too small → go right
        else {
            low = i + 1;
        }
    }

    return 0.0; // Just to satisfy compiler
}
