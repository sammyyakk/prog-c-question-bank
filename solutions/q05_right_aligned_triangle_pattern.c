/* Q5: Right-Aligned Decreasing Triangle Pattern
 * Print n lines with stars shifting right and decreasing
 * Line 1: no spaces, n stars
 * Line 2: 1 space, n-1 stars
 * Line i: (i-1) spaces, (n-i+1) stars
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of lines: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }

        // Print stars (decreasing count)
        for (int k = 0; k < n - i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
