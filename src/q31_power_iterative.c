/* Q31: Calculate power using loop (not recursion)
 * Formula: x^n = x * x * x * ... (n times)
 * Note: May overflow for large base/exp combinations
 */
#include <stdio.h>

int main(void)
{
    int base, exp;
    printf("Enter base and exponent: ");
    if (scanf("%d %d", &base, &exp) != 2)
        return 0;

    // Handle negative exponent (simple case)
    if (exp < 0)
    {
        printf("Negative exponents not supported\n");
        return 0;
    }

    int result = 1; // Changed from long long to int
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
