/*
 * Q7: Print Binary Representation
 * 
 * Convert decimal to binary by repeatedly dividing by 2.
 * Collect remainders in reverse order.
 * 
 * Example: 13 decimal
 * 13 ÷ 2 = 6 remainder 1
 *  6 ÷ 2 = 3 remainder 0
 *  3 ÷ 2 = 1 remainder 1
 *  1 ÷ 2 = 0 remainder 1
 * Reading upwards: 1101 binary
 */

#include <stdio.h>

void printBinary(unsigned int n)
{
    if (n == 0)
    {
        printf("0");
        return;
    }
    unsigned int bits[32];
    int idx = 0;
    while (n > 0)
    {
        bits[idx++] = n % 2;
        n /= 2;
    }
    for (int i = idx - 1; i >= 0; i--)
        printf("%u", bits[i]);
}

int main(void)
{
    unsigned int n;
    printf("Enter a positive integer: ");
    if (scanf("%u", &n) != 1)
        return 0;
    printBinary(n);
    printf("\n");
    return 0;
}
