/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

//The idea concept 
//[ ,Idx,]
//[ , i, ]
//[0, 0, 1,1,1,2,2,3,3,4]
//Each round dection the nums[i] need to store in nums[Idx] or not

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    int retNumsIdx = 1; //at least 1 elements

    //start with nums[1]
    for(int i = 1; i < numsSize; i++) {
        if(nums[i - 1] != nums[i]) {
            nums[retNumsIdx] = nums[i]; //store the non duplicates value
            retNumsIdx++;
        }
    }

    return retNumsIdx;
}

// @lc code=end

