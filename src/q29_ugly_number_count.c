/*
 * Q29: Count Ugly Numbers
 *
 * Ugly numbers have only 2, 3, or 5 as prime factors.
 * Examples: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, ...
 * Not ugly: 7 (prime factor 7), 14 (prime factor 7)
 *
 * Method: Divide by 2, 3, 5 repeatedly. If result is 1, it's ugly.
 */

#include <stdio.h>

int isUgly(int n)
{
    if (n <= 0)
        return 0;
    int primes[3] = {2, 3, 5};
    for (int i = 0; i < 3; i++)
    {
        while (n % primes[i] == 0) // Remove all factors of 2, 3, 5
            n /= primes[i];
    }
    return n == 1; // If only 2,3,5 factors, n becomes 1
}

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1)
        return 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (isUgly(i))
            count++;
    printf("%d\n", count);
    return 0;
}
