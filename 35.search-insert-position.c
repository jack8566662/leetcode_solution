/*
 * @lc app=leetcode id=35 lang=c
 *
 * [35] Search Insert Position
 */

//The idea concept 
//[idx, ]
//[i, , ]
//[1, 3,5,6]
//Each round, detect if the nums[i] is equal target
//If not equal, detect nums[i] is bigger or equal the targer.
//Satisfy the condition, which means the target needs to be placed or be fined in this index.
//Not satisfy condition, go to next index and element

// @lc code=start
int searchInsert(int* nums, int numsSize, int target) {
    int idx = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] != target) {
            if(nums[i] >= target) {
                return idx;
            }
            else {
                idx++;
            }
        }
    }

    return idx;
}
// @lc code=end

