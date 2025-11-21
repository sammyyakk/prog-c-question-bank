/*
 * Q27: Progressive Income Tax
 *
 * Tax slabs (progressive):
 * 0-2500: 0%
 * 2501-5000: 10%
 * 5001-10000: 20%
 * 10001+: 30%
 *
 * Example: Income Rs.5200
 * Tax = 0% of 2500 + 10% of 2500 + 20% of 200 = 0 + 250 + 40 = Rs.290
 */

#include <stdio.h>

double min(double a, double b) { return a < b ? a : b; }

int main(void)
{
    double x;
    printf("Enter income: ");
    if (scanf("%lf", &x) != 1 || x < 0)
        return 0;
    double tax = 0.0;
    double rem = x;
    double take;

    // Slab 1: 0-2500 @ 0%
    take = min(rem, 2500.0);
    tax += 0.0 * take;
    rem -= take;

    // Slab 2: 2501-5000 @ 10%
    if (rem > 0)
    {
        take = min(rem, 2500.0);
        tax += 0.10 * take;
        rem -= take;
    }

    // Slab 3: 5001-10000 @ 20%
    if (rem > 0)
    {
        take = min(rem, 5000.0);
        tax += 0.20 * take;
        rem -= take;
    }

    // Slab 4: 10001+ @ 30%
    if (rem > 0)
    {
        tax += 0.30 * rem;
    }
    printf("Tax: %.2f\n", tax);
    return 0;
}
