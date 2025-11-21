/*
 * Q20: Two-Digit Numbers with Digit Sum Multiple of 7
 *
 * Find all two-digit numbers (10-99) where sum of digits is divisible by 7.
 * Examples: 16 (1+6=7), 25 (2+5=7), 34 (3+4=7), 43, 52, 61, 70, 79, 88, 97
 */

#include <stdio.h>

int main(void)
{
    for (int i = 10; i <= 99; i++)
    {
        int s = (i / 10) + (i % 10); // Sum of digits
        if (s % 7 == 0)              // Check if multiple of 7
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
