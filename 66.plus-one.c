/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

/*
 * Solution Concept:
 * - The input array 'digits' represents a non-negative integer, with each element as a digit.
 * - To add one, start from the least significant digit (end of the array).
 * - If the digit is 9, set it to 0 and carry over the addition to the next digit to the left.
 * - Continue this process until there is no carry or all digits are processed.
 * - If there is still a carry after processing all digits (e.g., input was all 9's), 
 *   allocate a new array with one extra space, set the first element to 1.
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int addOne = 1, idx = digitsSize - 1;
    int *retDigits;

    while(addOne && idx >= 0) {
        if(digits[idx] == 9) {
            digits[idx] = 0;
            idx--;
            addOne = 1;
        }
        else {
            digits[idx] += addOne;
            addOne = 0;
            break;
        }
    }

    if(addOne) {
        *returnSize = digitsSize + 1;

        retDigits = (int*) malloc(*returnSize * sizeof(int));

        retDigits[0] = 1;
        memcpy(&retDigits[1], &digits[0],  digitsSize * sizeof(int));
    }
    else {
        *returnSize = digitsSize;

        retDigits = (int*) malloc(*returnSize * sizeof(int));

        memcpy(&retDigits[0], &digits[0],  digitsSize * sizeof(int));
    }

    return retDigits;
}
// @lc code=end

