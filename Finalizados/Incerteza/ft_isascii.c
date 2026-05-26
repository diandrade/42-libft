#include <stdio.h>

int isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int    c = 's';
    int    n = '9';

    printf("%d\n", isascii(c));
    printf("%d\n", isascii(n));
}