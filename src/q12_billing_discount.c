/*
 * Q12: Billing System with Discount
 * 
 * Calculate bill with discount slabs:
 * < Rs.1000: 5% discount
 * Rs.1000-4999: 10% discount
 * ≥ Rs.5000: 15% discount
 * 
 * Display itemized bill with total, discount, grand total.
 */

#include <stdio.h>

int main(void)
{
    int m;
    printf("Enter number of items: ");
    if (scanf("%d", &m) != 1 || m <= 0 || m > 100)
        return 0;
    double price[100];
    int qty[100];
    for (int i = 0; i < m; i++)
    {
        printf("Item %d price: ", i + 1);
        scanf("%lf", &price[i]);
        printf("Item %d quantity: ", i + 1);
        scanf("%d", &qty[i]);
    }
    double total = 0.0;
    printf("Item  Price  Qty  Subtotal\n");
    for (int i = 0; i < m; i++)
    {
        double sub = price[i] * qty[i];
        total += sub;
        printf("%4d  %5.2f  %3d  %8.2f\n", i + 1, price[i], qty[i], sub);
    }
    double discount_rate = 0.05;  // Default 5%
    if (total >= 1000.0 && total < 5000.0)
        discount_rate = 0.10;      // 10% for 1000-4999
    else if (total >= 5000.0)
        discount_rate = 0.15;      // 15% for 5000+
    double discount = total * discount_rate;
    double grand = total - discount;  // Final amount
    printf("------------------------------\n");
    printf("TOTAL: %.2f\n", total);
    printf("Discount %.0f%%: -%.2f\n", discount_rate * 100.0, discount);
    printf("------------------------------\n");
    printf("GRAND TOTAL: %.2f\n", grand);
    return 0;
}
