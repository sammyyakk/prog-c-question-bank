/* Q45: Print all prime numbers in a range
 * Prime: number divisible only by 1 and itself
 */
#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    // Check odd divisors up to sqrt(n)
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int start, end;
    printf("Enter range (start end): ");
    if (scanf("%d %d", &start, &end) != 2)
        return 0;

    printf("Prime numbers between %d and %d:\n", start, end);

    for (int i = start; i <= end; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
