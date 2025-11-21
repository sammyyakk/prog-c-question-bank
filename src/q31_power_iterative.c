/* Q31: Calculate power using loop (not recursion)
 * Formula: x^n = x * x * x * ... (n times)
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

    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exp, result);
    return 0;
}
