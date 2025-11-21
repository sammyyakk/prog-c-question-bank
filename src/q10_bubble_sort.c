/*
 * Q10: Bubble Sort
 * 
 * Sorting algorithm that repeatedly swaps adjacent elements if in wrong order.
 * After each pass, largest unsorted element "bubbles up" to correct position.
 * 
 * Time Complexity: O(n²) worst/average, O(n) best (if already sorted)
 * Space Complexity: O(1) - sorts in-place
 * 
 * Optimization: Stop early if no swaps occur (array is sorted).
 */

#include <stdio.h>

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    print_array(a, n);
    return 0;
}
