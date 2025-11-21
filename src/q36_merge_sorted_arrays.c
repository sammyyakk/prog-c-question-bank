/* Q36: Merge two sorted arrays into third sorted array
 * Use two-pointer technique to merge efficiently
 */
#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0 || n1 > 1000 || n2 > 1000)
        return 0;

    int a[1000], b[1000], c[2000];

    printf("Enter %d sorted elements of first array: ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter %d sorted elements of second array: ", n2);
    for (int i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int i = 0, j = 0, k = 0;

    // Merge while both arrays have elements
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while (i < n1)
        c[k++] = a[i++];
    while (j < n2)
        c[k++] = b[j++];

    printf("Merged array: ");
    for (int m = 0; m < k; m++)
    {
        if (m)
            printf(" ");
        printf("%d", c[m]);
    }
    printf("\n");
    return 0;
}
