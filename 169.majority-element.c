/*
 * @lc app=leetcode id=169 lang=c
 *
 * [169] Majority Element
 */

/*
 * Solution Concept (Majority Element):
 * The majority element appears more than n/2 times. Use a counter to track a candidate.
 * Add 1 to the counter for the same element, subtract 1 for a different one.
 * If the counter is 0, pick the current element as the new candidate.
 * The majority element cannot be eliminated by pairing with other elements, so it will remain.
 * Example: For [2, 1, 3, 2, 2], the majority element is 2.
 */

// @lc code=start
int majorityElement(int* nums, int numsSize) {
    int majority = 0, cnt = 0;

    majority = nums[0];
    cnt = 1;
    for(int i = 1; i < numsSize; i++) {
        if(majority != nums[i]) cnt--;
        else cnt++;

        if(cnt == 0) {
            majority = nums[i];
            cnt++;
        }
    }

    return majority;
}
// @lc code=end

