/* Q47: Binary to decimal conversion
 * Multiply each bit by power of 2 from right to left
 * Example: 1011 = 1*8 + 0*4 + 1*2 + 1*1 = 11
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char binary[65];
    printf("Enter a binary number: ");
    if (scanf("%s", binary) != 1)
        return 0;

    int len = strlen(binary);
    int decimal = 0;
    int power = 1; // 2^0 = 1

    // Process from right to left
    for (int i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += power;
        }
        else if (binary[i] != '0')
        {
            printf("Invalid binary number\n");
            return 0;
        }
        power *= 2;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}
