/* Q32: Find second largest element in array
 * Logic: Track both largest and second largest in one pass
 */
#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n < 2 || n > 1000)
        return 0;

    int a[1000];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first; // old first becomes second
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }

    if (second == INT_MIN)
    {
        printf("No second largest element found\n");
    }
    else
    {
        printf("Second largest: %d\n", second);
    }
    return 0;
}
