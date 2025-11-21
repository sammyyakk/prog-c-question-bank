/* Q46: Decimal to binary conversion (manual)
 * Divide by 2 repeatedly, collect remainders in reverse
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a decimal number: ");
    if (scanf("%d", &n) != 1 || n < 0)
        return 0;

    if (n == 0)
    {
        printf("Binary: 0\n");
        return 0;
    }

    int binary[32];
    int index = 0;

    // Collect remainders
    while (n > 0)
    {
        binary[index++] = n % 2;
        n /= 2;
    }

    // Print in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
