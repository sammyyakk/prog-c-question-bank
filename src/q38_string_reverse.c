/* Q38: String reverse without library function
 * Use two pointers from start and end, swap characters
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[256];
    printf("Enter a string: ");

    // Read with fgets to handle spaces
    if (!fgets(s, sizeof(s), stdin))
        return 0;
    if (s[0] == '\n' && !fgets(s, sizeof(s), stdin))
        return 0;

    // Remove newline if present
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[--len] = '\0';

    // Reverse using two pointers
    int i = 0, j = len - 1;
    while (i < j)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    printf("Reversed: %s\n", s);
    return 0;
}
