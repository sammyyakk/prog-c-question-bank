/* Q1: Armstrong Number Check
 * An Armstrong number equals the sum of cubes of its digits
 * Formula: For number abc, check if abc = a³ + b³ + c³
 * Example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153 ✓
 */
#include <stdio.h>

int isArmstrong(int n)
{
    if (n < 0)
        return 0; // negative numbers are not Armstrong

    int original = n;
    int sum = 0;

    // Extract each digit and add its cube
    while (n != 0)
    {
        int digit = n % 10;           // get last digit
        sum += digit * digit * digit; // add cube
        n /= 10;                      // remove last digit
    }

    return (sum == original); // check if sum equals original
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1)
        return 0;

    if (isArmstrong(n))
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}
