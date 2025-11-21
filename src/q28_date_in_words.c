#include <stdio.h>

const char *month_name(int m)
{
    switch (m)
    {
    case 1:
        return "January";
    case 2:
        return "February";
    case 3:
        return "March";
    case 4:
        return "April";
    case 5:
        return "May";
    case 6:
        return "June";
    case 7:
        return "July";
    case 8:
        return "August";
    case 9:
        return "September";
    case 10:
        return "October";
    case 11:
        return "November";
    case 12:
        return "December";
    default:
        return "";
    }
}

const char *suffix(int d)
{
    if (d % 100 >= 11 && d % 100 <= 13)
        return "th";
    switch (d % 10)
    {
    case 1:
        return "st";
    case 2:
        return "nd";
    case 3:
        return "rd";
    default:
        return "th";
    }
}

int main(void)
{
    int d, m, y;
    printf("Enter day month year: ");
    if (scanf("%d %d %d", &d, &m, &y) != 3)
        return 0;
    const char *mon = month_name(m);
    if (mon[0] == '\0')
    {
        printf("Invalid month\n");
        return 0;
    }
    printf("%d%s %s, %d\n", d, suffix(d), mon, y);
    return 0;
}
