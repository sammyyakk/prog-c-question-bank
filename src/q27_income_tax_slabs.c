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
    // 0-2500 @ 0%
    take = min(rem, 2500.0);
    tax += 0.0 * take;
    rem -= take;
    if (rem > 0)
    {
        take = min(rem, 2500.0);
        tax += 0.10 * take;
        rem -= take;
    }
    if (rem > 0)
    {
        take = min(rem, 5000.0);
        tax += 0.20 * take;
        rem -= take;
    }
    if (rem > 0)
    {
        tax += 0.30 * rem;
    }
    printf("Tax: %.2f\n", tax);
    return 0;
}
