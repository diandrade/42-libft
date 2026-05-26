//Compila: Sim
//Funcionamento Ideal: ?
#include <stdio.h>

int isalpha(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && 122)
    {
        return (1);
    }
    return (0);
}

int tolower(int c)
{
    if (isalpha(c) == 0)
    {
        return (0);
    }

    return (c + 32);
}

int main(void)
{
    int    c = 'S';
    printf("%d\n", toupper(c));
}