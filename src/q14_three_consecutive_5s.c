/*
 * Q14: Three Consecutive 5s
 * 
 * Check if a number contains three consecutive 5s (555).
 * Example: 345559 → YES, 1353554 → NO
 * 
 * Logic: Track consecutive 5 count while extracting digits.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)  // Changed from long long to int
        return 0;
    if (n < 0)
        n = -n;
    int count = 0, found = 0;  // count tracks consecutive 5s
    if (n == 0)
        count = 0;
    while (n > 0)
    {
        int d = n % 10;
        if (d == 5)
        {
            count++;
            if (count >= 3)
            {
                found = 1;
                break;
            }
        }
        else
            count = 0;
        n /= 10;
    }
    printf(found ? "YES\n" : "NO\n");
    return 0;
}
