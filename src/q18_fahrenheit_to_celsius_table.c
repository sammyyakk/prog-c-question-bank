/*
 * Q18: Fahrenheit to Celsius Table
 * 
 * Formula: C = (5/9)(F - 32)
 * IMPORTANT: Use 5.0/9.0 not 5/9 (integer division gives 0!)
 * 
 * Print table from -40°F to 220°F in steps of 10.
 */

#include <stdio.h>

double celsius(double f) { return 5.0 / 9.0 * (f - 32.0); }

int main(void)
{
    printf("Fahrenheit    Celsius\n");
    for (int f = -40; f <= 220; f += 10)
    {
        printf("%10d    %7.2f\n", f, celsius((double)f));
    }
    return 0;
}
