/* Q6: Amicable Numbers Check
 * Two numbers are amicable if:
 * - Sum of proper divisors of first = second number
 * - Sum of proper divisors of second = first number
 * Example: 220 and 284
 * Divisors of 220: 1,2,4,5,10,11,20,22,44,55,110 → sum = 284
 * Divisors of 284: 1,2,4,71,142 → sum = 220
 */
#include <stdio.h>

int sum_proper_divisors(int n)
{
    if (n <= 1)
        return 0;

    int sum = 1; // 1 is always a divisor

    // Check divisors up to sqrt(n) to save time
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i; // add divisor i
            int other = n / i;
            if (other != i && other != n)
            {
                sum += other; // add paired divisor (avoid duplicate)
            }
        }
    }
    return sum;
}

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    int sum_a = sum_proper_divisors(a);
    int sum_b = sum_proper_divisors(b);

    // Check if they are amicable
    if (sum_a == b && sum_b == a)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
