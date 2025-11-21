/* Q37: Remove duplicate elements from array
 * Keep only first occurrence of each element
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;

    int a[1000];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int unique[1000];
    int unique_count = 0;

    for (int i = 0; i < n; i++)
    {
        // Check if already exists in unique array
        int found = 0;
        for (int j = 0; j < unique_count; j++)
        {
            if (a[i] == unique[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unique[unique_count++] = a[i];
        }
    }

    printf("Array after removing duplicates: ");
    for (int i = 0; i < unique_count; i++)
    {
        if (i)
            printf(" ");
        printf("%d", unique[i]);
    }
    printf("\n");
    return 0;
}
