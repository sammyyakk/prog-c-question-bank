/* Q3: HCF (Highest Common Factor) and LCM (Least Common Multiple)
 * HCF: Largest number that divides both numbers (also called GCD)
 * LCM: Smallest number that is multiple of both numbers
 * Relationship: a × b = HCF(a,b) × LCM(a,b)
 * Algorithm: Use Euclid's algorithm for HCF
 */
#include <stdio.h>

// Euclid's algorithm for GCD/HCF
int gcd(int a, int b)
{
    // Make numbers positive
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    // Keep dividing until remainder is 0
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    int hcf = gcd(a, b);

    // Calculate LCM using formula: LCM = (a × b) / HCF
    int lcm = 0;
    if (hcf != 0)
    {
        lcm = (a / hcf) * b; // divide first to avoid overflow
    }

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);
    return 0;
}
