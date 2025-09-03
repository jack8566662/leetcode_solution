/*
 * @lc app=leetcode id=118 lang=c
 *
 * [118] Pascal's Triangle
 */

/*
 * Solution Concept:
 * - Allocate a 2D array to represent Pascal's Triangle.
 * - Each row i has (i + 1) elements.
 * - The first and last elements of each row are 1.
 * - Each inner element is the sum of the two elements above it from the previous row.
 * - Return the triangle and the sizes of each row.
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int** triangle;

    *returnSize = numRows;
    returnColumnSizes[0] = (int*)malloc(sizeof(int) * numRows);
    triangle = (int**)malloc(sizeof(int*) * numRows);

    for(int i = 0; i < numRows; i++) {
        returnColumnSizes[0][i] = i + 1;

        triangle[i] = (int*)malloc(sizeof(int) * (i + 1));
        triangle[i][0] = 1;
        triangle[i][i] = 1;

        for(int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }
    }

    return triangle;
}
// @lc code=end

