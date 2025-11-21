/*
 * Q30: Sorting and Binary Search Menu
 *
 * Implement three algorithms:
 * 1. Bubble Sort - O(n²): Compare adjacent, swap if wrong order
 * 2. Insertion Sort - O(n²): Insert each element into sorted portion
 * 3. Binary Search - O(log n): Divide and conquer (requires sorted array)
 */

#include <stdio.h>

void print_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

void bubble_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++) // Each pass bubbles max to end
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i], j = i - 1;
        // Shift elements right to make space
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key; // Insert key at correct position
    }
}

int binary_search(int a[], int n, int target)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == target)
            return m;
        else if (a[m] < target)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    int n;
    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int choice;
    printf("Menu: 1)Bubble Sort 2)Insertion Sort 3)Binary Search\n");
    printf("Enter choice: ");
    if (scanf("%d", &choice) != 1)
        return 0;

    if (choice == 1)
    {
        bubble_sort(a, n);
        print_array(a, n);
    }
    else if (choice == 2)
    {
        insertion_sort(a, n);
        print_array(a, n);
    }
    else if (choice == 3)
    {
        // ensure sorted first
        insertion_sort(a, n);
        int target;
        printf("Enter target: ");
        scanf("%d", &target);
        int idx = binary_search(a, n, target);
        printf("%d\n", idx);
    }
    else
    {
        printf("Invalid choice\n");
    }
    return 0;
}
