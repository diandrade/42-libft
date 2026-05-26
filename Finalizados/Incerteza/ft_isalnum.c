#include <stdio.h>

int isdigit(int c)
{
    if ((c >= 48 && c <= 57))
    {
        return (1);
    }
    return (0);
}

int isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && 122))
    {
        return (1);
    }
    return (0);
}

int isalnum(int c)
{
    if (isdigit(c) == 1 || (isalpha(c) == 1))
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int    c = 's';
    int    n = '9';

    printf("%d\n", isalnum(c));
    printf("%d\n", isalnum(n));
}