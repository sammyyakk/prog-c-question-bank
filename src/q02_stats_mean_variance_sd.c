/* Q2: Statistical Calculations - Mean, Variance, Standard Deviation
 * Mean (x̅): Average of all numbers
 * Variance (σ²): Measure of spread, formula: Σ(xᵢ - x̅)² / (n-1)
 * Standard Deviation (σ): Square root of variance
 */
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    printf("Enter number of values: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    double arr[1000];
    if (n > 1000)
        n = 1000; // limit array size

    // Step 1: Read values and calculate sum
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    // Step 2: Calculate mean
    double mean = sum / n;

    // Step 3: Calculate variance (sample variance with n-1)
    double variance = 0.0;
    if (n > 1)
    {
        for (int i = 0; i < n; i++)
        {
            double diff = arr[i] - mean;
            variance += diff * diff;
        }
        variance = variance / (n - 1);
    }

    // Step 4: Standard deviation is square root of variance
    double std_dev = sqrt(variance);

    printf("\nMean = %.4f\n", mean);
    printf("Variance = %.4f\n", variance);
    printf("Standard Deviation = %.4f\n", std_dev);
    return 0;
}
