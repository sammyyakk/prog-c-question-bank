/* Q40: Convert string to uppercase and lowercase
 * Use ASCII manipulation: 'a' is 97, 'A' is 65 (difference = 32)
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[256];
    printf("Enter a string: ");

    if (!fgets(s, sizeof(s), stdin))
        return 0;
    if (s[0] == '\n' && !fgets(s, sizeof(s), stdin))
        return 0;

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[--len] = '\0';

    // Convert to uppercase
    char upper[256];
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            upper[i] = s[i] - 32; // convert to uppercase
        }
        else
        {
            upper[i] = s[i];
        }
    }
    upper[len] = '\0';

    // Convert to lowercase
    char lower[256];
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            lower[i] = s[i] + 32; // convert to lowercase
        }
        else
        {
            lower[i] = s[i];
        }
    }
    lower[len] = '\0';

    printf("Uppercase: %s\n", upper);
    printf("Lowercase: %s\n", lower);
    return 0;
}
