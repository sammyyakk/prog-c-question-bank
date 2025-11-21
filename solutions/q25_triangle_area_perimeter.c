/*
 * Q25: Triangle Area and Perimeter
 *
 * Given three sides a, b, c:
 * Perimeter: P = a + b + c
 * Area (Heron's formula): A = √(s(s-a)(s-b)(s-c))
 *   where s = (a+b+c)/2 is the semi-perimeter
 */

#include <stdio.h>
#include <math.h>

double perim(double a, double b, double c) { return a + b + c; }

double area(double a, double b, double c)
{
    double s = (a + b + c) / 2.0; // Semi-perimeter
    double val = s * (s - a) * (s - b) * (s - c);
    if (val <= 0)
        return 0.0;   // Invalid triangle
    return sqrt(val); // Heron's formula
}

// As per prompt prototypes (simplified to single value)
double read_input()
{
    double v;
    scanf("%lf", &v);
    return v;
}

double print_value(double val)
{
    printf("%.4f\n", val);
    return val;
}

int main(void)
{
    printf("Enter sides a b c: ");
    double a = read_input();
    double b = read_input();
    double c = read_input();
    double p = perim(a, b, c);
    double ar = area(a, b, c);
    printf("Perimeter: ");
    print_value(p);
    printf("Area: ");
    print_value(ar);
    return 0;
}
