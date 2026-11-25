#include <stdio.h>
#include <assert.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }

    return max_profit;
}

int main(void) {
    // Test 1: Typical case (buy at 1, sell at 6 -> profit 5)
    int p1[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(p1, 6) == 5);

    // Test 2: Edge case (strictly decreasing prices -> profit 0)
    int p2[] = {7, 6, 4, 3, 1};
    assert(maxProfit(p2, 5) == 0);

    // Test 3: Edge case (single day -> profit 0)
    int p3[] = {5};
    assert(maxProfit(p3, 1) == 0);

    printf("All local tests passed for 04-best-time-to-buy-and-sell-stock.c!\n");
    return 0;
}