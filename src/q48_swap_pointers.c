/* Q48: Swap two numbers using pointers (call by reference demo)
 * Shows how pointers allow functions to modify original values
 */
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &x, &y) != 2)
        return 0;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y); // pass addresses

    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
