//Compila: Sim
//Funcionamento Ideal: ?

/*
isalpha()
    checks  for an alphabetic character; in the standard "C" locale,
    it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
    cales, there may be additional characters for which isalpha() is
    true—letters which are neither uppercase nor lowercase.
*/

#include <stdio.h>

int isdigit(int c)
{
    if ((c >= 48 && c <= 57))
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int    c = 's';
    int    n = '9';

    printf("%d\n", isdigit(c));
    printf("%d\n", isdigit(n));
}