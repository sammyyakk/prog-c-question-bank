/*
 * Q21: Sum of Products of Consecutive Elements
 *
 * Calculate: a[0]*a[1] + a[1]*a[2] + a[2]*a[3] + ...
 *
 * Example: [4, 5, 2, 5, 6, 4, 7]
 * Result: 4×5 + 5×2 + 2×5 + 5×6 + 6×4 + 4×7 = 20+10+10+30+24+28 = 122
 */

#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n < 0 || n > 100000)
        return 0;
    int sum = 0; // Changed from long long to int
    if (n == 0)
    {
        printf("0\n");
        return 0;
    }
    int prev, curr; // Changed from long long to int
    scanf("%d", &prev);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &curr);
        sum += prev * curr; // Multiply adjacent pairs
        prev = curr;        // Move to next pair
    }
    printf("%d\n", sum);
    return 0;
}
