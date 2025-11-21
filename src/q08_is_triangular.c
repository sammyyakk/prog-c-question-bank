/*
 * Q8: Triangular Number Test
 * 
 * Triangular numbers: 1, 3, 6, 10, 15, 21, 28, 36, ...
 * Formula: T_k = k(k+1)/2
 * 
 * To test if n is triangular:
 * If n = k(k+1)/2, then k² + k - 2n = 0
 * Solving quadratic: k = (-1 + √(1+8n))/2
 * 
 * n is triangular if k is a positive integer.
 * Check: (8n + 1) must be perfect square AND k must be whole number.
 */

#include <stdio.h>
#include <math.h>

int isTriangular(int n)
{
    if (n <= 0)
        return 0;
    double val = sqrt(8.0 * n + 1.0);  // Calculate √(8n+1)
    int k = (int)((val - 1.0) / 2.0);  // k = (√(8n+1) - 1) / 2
    return k * (k + 1) / 2 == n;       // Verify: k(k+1)/2 == n
}

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1)
        return 0;
    printf("%d\n", isTriangular(n));
    return 0;
}
