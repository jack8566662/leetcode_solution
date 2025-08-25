/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

/*
Solution Concept:
- Make a temporary copy of the first m elements of nums1 (nums1Temp).
- Merge nums1Temp and nums2 into nums1 in sorted order using two pointers.
- At each step, select the smaller value from nums1Temp or nums2 and write it to nums1.
- After one array is fully merged, copy any remaining elements from the other array into nums1.
*/

// @lc code=start
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int idx = 0, mIdx = 0, nIdx = 0;
    
    int *nums1Temp = (int*) malloc(sizeof(int) * m);
    memcpy(&nums1Temp[0], &nums1[0], sizeof(int) * m);

    while((mIdx < m) && (nIdx < n)) {
        if(nums1Temp[mIdx] <= nums2[nIdx]) {
            nums1[idx++] = nums1Temp[mIdx++];
        }
        else {
            nums1[idx++] = nums2[nIdx++];
        }
    }

    if(mIdx < m) {
        memcpy(&nums1[idx], &nums1Temp[mIdx], sizeof(int) * (m - mIdx));
    }

    if(nIdx < n) {
        memcpy(&nums1[idx], &nums2[nIdx], sizeof(int) * (n - nIdx));
    }

    free(nums1Temp);
}
// @lc code=end

