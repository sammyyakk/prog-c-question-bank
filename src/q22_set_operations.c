/*
 * Q22: Set Operations
 *
 * Implement:
 * - Union: All unique elements from A and B
 * - Intersection: Elements present in both A and B
 * - A - B: Elements in A but not in B
 * - B - A: Elements in B but not in A
 */

#include <stdio.h>

int contains(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            return 1;
    return 0;
}

int main(void)
{
    int na, nb;
    int A[100], B[100];
    int Auniq[100], Buniq[100];
    int ua = 0, ub = 0;

    printf("Enter size of A: ");
    if (scanf("%d", &na) != 1 || na < 0 || na > 100)
        return 0;
    printf("Enter elements of A: ");
    for (int i = 0; i < na; i++)
        scanf("%d", &A[i]);
    printf("Enter size of B: ");
    if (scanf("%d", &nb) != 1 || nb < 0 || nb > 100)
        return 0;
    printf("Enter elements of B: ");
    for (int i = 0; i < nb; i++)
        scanf("%d", &B[i]);

    for (int i = 0; i < na; i++)
        if (!contains(Auniq, ua, A[i]))
            Auniq[ua++] = A[i];
    for (int i = 0; i < nb; i++)
        if (!contains(Buniq, ub, B[i]))
            Buniq[ub++] = B[i];

    // Union
    int U[200];
    int un = 0;
    for (int i = 0; i < ua; i++)
        U[un++] = Auniq[i];
    for (int i = 0; i < ub; i++)
        if (!contains(U, un, Buniq[i]))
            U[un++] = Buniq[i];

    // Intersection
    int I[100];
    int in = 0;
    for (int i = 0; i < ua; i++)
        if (contains(Buniq, ub, Auniq[i]))
            I[in++] = Auniq[i];

    // A - B
    int D1[100];
    int d1 = 0;
    for (int i = 0; i < ua; i++)
        if (!contains(Buniq, ub, Auniq[i]))
            D1[d1++] = Auniq[i];

    // B - A
    int D2[100];
    int d2 = 0;
    for (int i = 0; i < ub; i++)
        if (!contains(Auniq, ua, Buniq[i]))
            D2[d2++] = Buniq[i];

    printf("Union: ");
    for (int i = 0; i < un; i++)
    {
        if (i)
            printf(" ");
        printf("%d", U[i]);
    }
    printf("\nIntersection: ");
    for (int i = 0; i < in; i++)
    {
        if (i)
            printf(" ");
        printf("%d", I[i]);
    }
    printf("\nA-B: ");
    for (int i = 0; i < d1; i++)
    {
        if (i)
            printf(" ");
        printf("%d", D1[i]);
    }
    printf("\nB-A: ");
    for (int i = 0; i < d2; i++)
    {
        if (i)
            printf(" ");
        printf("%d", D2[i]);
    }
    printf("\n");

    return 0;
}
