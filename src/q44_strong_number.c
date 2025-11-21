/* Q44: Strong number check
 * Strong number: sum of factorials of digits equals the number
 * Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145
 */
#include <stdio.h>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1 || n < 0)
        return 0;

    int original = n;
    int sum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    if (sum == original)
    {
        printf("%d is a Strong number\n", original);
    }
    else
    {
        printf("%d is not a Strong number\n", original);
    }
    return 0;
}
