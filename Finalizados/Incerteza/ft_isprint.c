/* 
isprint()
checks for any printable character including space.
*/

#include <stdio.h>

int isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int    c = 's';
    int    n = '9';

    printf("%d\n", isprint(c));
    printf("%d\n", isprint(n));
}