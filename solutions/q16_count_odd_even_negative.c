/*
 * Q16: Count Odd, Even, and Negative
 *
 * Read exactly 10 integers and count:
 * - How many are even
 * - How many are odd
 * - How many are negative (note: -3 is both negative AND odd)
 */

#include <stdio.h>

int main(void)
{
    int x, even = 0, odd = 0, neg = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        if (scanf("%d", &x) != 1)
            return 0;
        if (x < 0)
            neg++; // Count negatives separately
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even: %d\nOdd: %d\nNegative: %d\n", even, odd, neg);
    return 0;
}
