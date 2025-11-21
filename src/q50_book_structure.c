/* Q50: Structure to store and display book information
 * Shows basic structure usage with input/output
 */
#include <stdio.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main(void)
{
    struct Book b;

    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);
    // Remove newline
    int len = strlen(b.title);
    if (len > 0 && b.title[len - 1] == '\n')
        b.title[len - 1] = '\0';

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);
    len = strlen(b.author);
    if (len > 0 && b.author[len - 1] == '\n')
        b.author[len - 1] = '\0';

    printf("Enter number of pages: ");
    scanf("%d", &b.pages);

    printf("Enter price: ");
    scanf("%f", &b.price);

    printf("\n--- Book Details ---\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Pages: %d\n", b.pages);
    printf("Price: %.2f\n", b.price);

    return 0;
}
