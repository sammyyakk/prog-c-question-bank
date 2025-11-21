/*
 * Q24: String Palindrome
 *
 * Check if string reads same forwards and backwards.
 * Examples: "madam" → YES, "hello" → NO
 *
 * Method: Compare characters from both ends moving inward.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[256];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin))
        return 0;
    // Handle leftover newline from previous input
    if (s[0] == '\n')
    {
        if (!fgets(s, sizeof(s), stdin))
            return 0;
    }
    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') // Remove trailing newline
        s[--len] = '\0';

    // Two-pointer check
    int i = 0, j = len ? len - 1 : 0;
    int ok = 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            ok = 0;
            break;
        }
        i++;
        j--;
    }
    printf(ok ? "YES\n" : "NO\n");
    return 0;
}
