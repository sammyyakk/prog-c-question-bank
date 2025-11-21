/* Q34: Check if matrix is symmetric
 * A matrix is symmetric if mat[i][j] == mat[j][i] for all i, j
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

    int symmetric = 1; // assume true

    for (int i = 0; i < n && symmetric; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    printf(symmetric ? "Symmetric\n" : "Not Symmetric\n");
    return 0;
}
