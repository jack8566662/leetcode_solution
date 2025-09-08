/*
 * @lc app=leetcode id=121 lang=c
 *
 * [121] Best Time to Buy and Sell Stock
 */

 /*
 * Solution Concept (Simple):
 * Keep track of the lowest price so far. For each price, check if selling at that price gives a better profit.
 * Update the lowest price when you find a cheaper one. At the end, return the highest profit found.
 */

// @lc code=start
int maxProfit(int* prices, int pricesSize) {
    int buy = 0, profit = 0, temp;

    buy = prices[0];
    for(int i = 1; i < pricesSize; i++) {
        if(prices[i] < buy) {
            buy = prices[i];
        }
        else if(prices[i] > buy) {
            temp = prices[i] - buy;
            profit = temp > profit ? temp : profit;
        }
    }

    return profit;
}
// @lc code=end

