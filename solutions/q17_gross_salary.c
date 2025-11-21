/*
 * Q17: Gross Salary Calculator
 *
 * Calculate gross salary = Basic + HRA + DA
 *
 * Slabs:
 * Basic 1-4000:    HRA 10%, DA 50%
 * Basic 4001-8000:  HRA 20%, DA 60%
 * Basic 8001-12000: HRA 25%, DA 70%
 * Basic 12001+:     HRA 30%, DA 80%
 */

#include <stdio.h>

int main(void)
{
    double basic;
    printf("Enter basic salary: ");
    if (scanf("%lf", &basic) != 1 || basic <= 0)
        return 0;
    double hra_per = 0, da_per = 0;

    // Determine slab
    if (basic <= 4000)
    {
        hra_per = 10;
        da_per = 50;
    }
    else if (basic <= 8000)
    {
        hra_per = 20;
        da_per = 60;
    }
    else if (basic <= 12000)
    {
        hra_per = 25;
        da_per = 70;
    }
    else
    {
        hra_per = 30;
        da_per = 80;
    }
    double hra = basic * hra_per / 100.0;
    double da = basic * da_per / 100.0;
    double gross = basic + hra + da;
    printf("HRA (%.0f%%): %.2f\n", hra_per, hra);
    printf("DA  (%.0f%%): %.2f\n", da_per, da);
    printf("Gross Salary: %.2f\n", gross);
    return 0;
}
