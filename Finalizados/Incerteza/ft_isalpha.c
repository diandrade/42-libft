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

int isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && 122))
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int    c = 's';
    int    n = '9';

    printf("%d\n", isalpha(c));
    printf("%d\n", isalpha(n));
}