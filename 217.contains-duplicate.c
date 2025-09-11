/*
 * @lc app=leetcode id=217 lang=c
 *
 * [217] Contains Duplicate
 */

/*
 * Solution Concept:
 * To check for duplicates, first sort the array using qsort.
 * qsort needs a comparison function (cmp) that returns the difference between two numbers.
 * After sorting, compare each number with its neighbor; if any two are equal, a duplicate exists.
 */

// @lc code=start
int cmp(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(&nums[0], numsSize, sizeof(int), cmp);

    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}
// @lc code=end

