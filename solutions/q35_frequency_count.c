/* Q35: Count frequency of each element in array
 * Track how many times each unique element appears
 */
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000)
        return 0;

    int a[1000];
    int visited[1000] = {0}; // mark if already counted

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Element : Frequency\n");
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue; // skip if already counted

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                visited[j] = 1; // mark as counted
            }
        }
        printf("%d : %d\n", a[i], count);
    }
    return 0;
}
