/* Q33: Matrix diagonal sum (primary and secondary)
 * Primary diagonal: top-left to bottom-right (i == j)
 * Secondary diagonal: top-right to bottom-left (i + j == n - 1)
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter matrix size (n x n): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100)
        return 0;

    int mat[100][100];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++)
    {
        primary += mat[i][i];           // main diagonal
        secondary += mat[i][n - 1 - i]; // anti-diagonal
    }

    printf("Primary diagonal sum: %d\n", primary);
    printf("Secondary diagonal sum: %d\n", secondary);
    return 0;
}
