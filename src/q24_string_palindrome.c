#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[256];
    printf("Enter a string: ");
    if (!fgets(s, sizeof(s), stdin))
        return 0;
    // If the first fgets reads leftover newline, read again
    if (s[0] == '\n')
    {
        if (!fgets(s, sizeof(s), stdin))
            return 0;
    }
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[--len] = '\0';
    size_t i = 0, j = len ? len - 1 : 0;
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
