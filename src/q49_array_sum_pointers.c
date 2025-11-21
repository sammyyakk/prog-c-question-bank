/* Q49: Sum of array using pointers
 * Demonstrates pointer arithmetic for array traversal
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

    int sum = 0;
    int *ptr = a; // pointer to first element

    // Use pointer to traverse array
    for (int i = 0; i < n; i++)
    {
        sum += *ptr; // dereference to get value
        ptr++;       // move to next element
    }

    printf("Sum: %d\n", sum);
    return 0;
}
