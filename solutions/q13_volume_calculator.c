/*
 * Q13: Volume Calculator
 *
 * Calculate volume of 3D shapes:
 * Cube: V = a³
 * Cuboid: V = l×b×h
 * Sphere: V = (4/3)πr³
 * Cylinder: V = πr²h
 * Cone: V = (1/3)πr²h
 */

#include <stdio.h>

#define PI 3.14159

double vol_cube(double a) { return a * a * a; }
double vol_cuboid(double l, double b, double h) { return l * b * h; }
double vol_sphere(double r) { return (4.0 / 3.0) * PI * r * r * r; }
double vol_cylinder(double r, double h) { return PI * r * r * h; }
double vol_cone(double r, double h) { return (1.0 / 3.0) * PI * r * r * h; }

int main(void)
{
    int ch;
    double a, l, b, h, r;
    printf("Choose shape: 1)Cube 2)Cuboid 3)Sphere 4)Cylinder 5)Cone\n");
    printf("Enter choice: ");
    if (scanf("%d", &ch) != 1)
        return 0;
    switch (ch)
    {
    case 1:
        printf("Side: ");
        scanf("%lf", &a);
        printf("Volume = %.4f\n", vol_cube(a));
        break;
    case 2:
        printf("Length Breadth Height: ");
        scanf("%lf %lf %lf", &l, &b, &h);
        printf("Volume = %.4f\n", vol_cuboid(l, b, h));
        break;
    case 3:
        printf("Radius: ");
        scanf("%lf", &r);
        printf("Volume = %.4f\n", vol_sphere(r));
        break;
    case 4:
        printf("Radius Height: ");
        scanf("%lf %lf", &r, &h);
        printf("Volume = %.4f\n", vol_cylinder(r, h));
        break;
    case 5:
        printf("Radius Height: ");
        scanf("%lf %lf", &r, &h);
        printf("Volume = %.4f\n", vol_cone(r, h));
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}
