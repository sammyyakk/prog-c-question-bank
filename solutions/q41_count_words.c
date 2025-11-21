/* Q41: Count words in a string
 * Word: sequence of non-space characters
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

    int words = 0;
    int in_word = 0; // flag to track if we're inside a word

    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            if (!in_word)
            {
                words++; // new word started
                in_word = 1;
            }
        }
        else
        {
            in_word = 0; // space found, not in word
        }
    }

    printf("Number of words: %d\n", words);
    return 0;
}
