/* Q39: Check if two strings are anagrams
 * Anagram: same letters, different order (e.g., "listen" and "silent")
 * Method: Sort both strings and compare
 */
#include <stdio.h>
#include <string.h>

void sort_string(char s[])
{
    int len = strlen(s);
    // Simple bubble sort
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (s[j] > s[j + 1])
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    char s1[256], s2[256];

    printf("Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin))
        return 0;
    if (s1[0] == '\n' && !fgets(s1, sizeof(s1), stdin))
        return 0;

    printf("Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin))
        return 0;

    // Remove newlines
    int len1 = strlen(s1);
    if (len1 > 0 && s1[len1 - 1] == '\n')
        s1[--len1] = '\0';
    int len2 = strlen(s2);
    if (len2 > 0 && s2[len2 - 1] == '\n')
        s2[--len2] = '\0';

    // Check length first
    if (len1 != len2)
    {
        printf("Not Anagrams\n");
        return 0;
    }

    // Sort and compare
    sort_string(s1);
    sort_string(s2);

    if (strcmp(s1, s2) == 0)
    {
        printf("Anagrams\n");
    }
    else
    {
        printf("Not Anagrams\n");
    }
    return 0;
}
