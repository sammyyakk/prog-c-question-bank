/*
 * Q9: Reverse an Integer
 * 
 * Reverse the digits of a number.
 * Example: 12345 → 54321, -678 → -876
 * 
 * Algorithm:
 * 1. Extract last digit: digit = n % 10
 * 2. Append to reversed: reversed = reversed * 10 + digit
 * 3. Remove last digit: n = n / 10
 * 4. Repeat until n becomes 0
 */

#include <stdio.h>

int main(void)
{
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1)
        return 0;
    long long sign = (n < 0) ? -1 : 1;  // Store sign separately
    long long x = n * sign;               // Work with absolute value
    long long rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + (x % 10);  // Build reversed number
        x /= 10;                      // Remove last digit
    }
    printf("%lld\n", rev * sign);   // Apply original sign
    return 0;
}
