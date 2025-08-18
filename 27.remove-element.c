/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

 //The idea concept 
//[idx, ,]
//[i  , ,]
//[3,2,2,3]
//Each round, detection of the nums[i] needs to be removed from the nums[] or not.

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    int size = 0, idx = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != val) {
            nums[idx++] = nums[i];
        }
    }

    size = idx;
    return size;
}
// @lc code=end

