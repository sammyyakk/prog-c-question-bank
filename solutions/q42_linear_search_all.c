/* Q42: Linear search with position of all occurrences
 * Find all positions where target appears
 */
#include <stdio.h>

int main(void)
{
    int n, target;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;

    int a[1000];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &target);

    int found = 0;
    printf("Element %d found at positions: ", target);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            if (found)
                printf(", ");
            printf("%d", i);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Not found");
    }
    printf("\n");
    return 0;
}
