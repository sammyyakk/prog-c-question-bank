/* Q4: Series Sum - 1 + 11 + 111 + 1111 + ...
 * Pattern: Each term is all 1's, length increases
 * Build each term: multiply previous by 10 and add 1
 * Example for n=4: 1 + 11 + 111 + 1111 = 1234
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;

    int term = 0;
    int sum = 0;

    printf("Series: ");
    for (int i = 1; i <= n; i++)
    {
        term = term * 10 + 1; // build term: 1, 11, 111, ...
        printf("%d", term);
        if (i < n)
            printf(" + ");
        sum += term;
    }

    printf("\nSum = %d\n", sum);
    return 0;
}
