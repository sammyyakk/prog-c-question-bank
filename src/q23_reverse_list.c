/*
 * Q23: Reverse a List
 * 
 * Reverse array in-place using two-pointer technique.
 * Example: [1, 2, 3, 4, 5] → [5, 4, 3, 2, 1]
 * 
 * Method: Swap elements from both ends moving towards center.
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    // Two-pointer swap
    int i = 0, j = n - 1;
    while (i < j)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    for (int k = 0; k < n; k++)
    {
        if (k)
            printf(" ");
        printf("%d", a[k]);
    }
    printf("\n");
    return 0;
}
