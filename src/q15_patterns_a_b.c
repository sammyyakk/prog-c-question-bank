/*
 * Q15: Number Patterns
 *
 * Pattern (a):    Pattern (b):
 * 1               1
 * 1 2             2 2
 * 1 2 3           3 3 3
 *
 * Pattern (a): Print numbers 1 to i
 * Pattern (b): Print number i, i times
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    // Pattern (a): 1, 1 2, 1 2 3, ...
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 1)
                printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // Pattern (b)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 1)
                printf(" ");
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
