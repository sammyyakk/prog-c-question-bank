/* Q43: Perfect number check
 * Perfect number: sum of proper divisors equals the number
 * Example: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int sum = 0;

    // Find all divisors (except n itself)
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        printf("%d is a Perfect number\n", n);
    }
    else
    {
        printf("%d is not a Perfect number\n", n);
    }
    return 0;
}
