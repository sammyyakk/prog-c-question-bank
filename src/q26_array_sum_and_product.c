#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter size (<=100): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 100)
        return 0;
    int A[100], B[100], C[100], D[100];
    printf("Enter %d elements of A:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("Enter %d elements of B:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &B[i]);
    for (int i = 0; i < n; i++)
    {
        C[i] = A[i] + B[i];
        D[i] = A[i] * B[i];
    }
    printf("C (sum): ");
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", C[i]);
    }
    printf("\n");
    printf("D (prod): ");
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", D[i]);
    }
    printf("\n");
    return 0;
}
