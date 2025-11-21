/*
 * Q11: Even Sum vs Odd Sum
 * 
 * Find sum of even numbers and sum of odd numbers in array.
 * Print whichever is larger.
 * 
 * Example: [2, 3, 3, 5, 4, 8, 7, 11, 2]
 * Even sum = 2+4+8+2 = 16
 * Odd sum = 3+3+5+7+11 = 29
 * Output: 29
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int even_sum = 0, odd_sum = 0;  // Changed from long long to int
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)  // Check if even
            even_sum += a[i];
        else
            odd_sum += a[i];  // Otherwise odd
    }
    int ans = (even_sum >= odd_sum) ? even_sum : odd_sum;  // Pick larger
    printf("%d\n", ans);
    return 0;
}
