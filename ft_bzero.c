#include <stdio.h>

void ft_bzero(char *s, int n)
{
    int i;

    i = 0;
    while(i <= n && s[i])
    {
        s[i] = '\0';
        i++;
    }
}

int main(void)
{
    char    s[] = "123456789";

    printf("%s\n", s);
    ft_bzero(s, 5);
    printf("%s\n",s);
}