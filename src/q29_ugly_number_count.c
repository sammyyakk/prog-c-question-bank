#include <stdio.h>

int isUgly(int n)
{
    if (n <= 0)
        return 0;
    int primes[3] = {2, 3, 5};
    for (int i = 0; i < 3; i++)
    {
        while (n % primes[i] == 0)
            n /= primes[i];
    }
    return n == 1;
}

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1)
        return 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (isUgly(i))
            count++;
    printf("%d\n", count);
    return 0;
}
