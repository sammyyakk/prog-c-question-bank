/*
 * Q19: Electricity Bill Calculator
 *
 * Rate slabs (progressive):
 * First 200 units: Rs.1 per unit
 * Next 100 units (201-300): Rs.1.5 per unit
 * Beyond 300: Rs.2 per unit
 *
 * Example: 350 units = 200×1 + 100×1.5 + 50×2 = Rs.450
 */

#include <stdio.h>

int main(void)
{
    int units;
    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0)
        return 0;
    double bill = 0.0;
    int rem = units;
    int take = rem > 200 ? 200 : rem; // First 200 @ Rs.1
    bill += take * 1.0;
    rem -= take;
    if (rem > 0)
    {
        take = rem > 100 ? 100 : rem; // Next 100 @ Rs.1.5
        bill += take * 1.5;
        rem -= take;
    }
    if (rem > 0)
    {
        bill += rem * 2.0; // Remaining @ Rs.2
    }
    printf("Total charge: %.2f\n", bill);
    return 0;
}
