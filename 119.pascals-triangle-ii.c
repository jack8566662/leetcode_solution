/*
 * @lc app=leetcode id=119 lang=c
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int rowSize;
    int** triangle;
    
    rowSize = rowIndex + 1;
    *returnSize = rowSize;

    triangle = (int**)malloc(sizeof(int*) * rowSize);

    for(int i = 0; i < rowSize; i++) {
        triangle[i] = (int*)malloc(sizeof(int) * (i + 1));

        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for(int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }
    }

    return triangle[rowIndex];
}
// @lc code=end

