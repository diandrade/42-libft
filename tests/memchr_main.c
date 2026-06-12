int main(void)
{
    char *str = "string with xing";
    char *result;

    if ((result = (char *)ft_memchr(str, 'x', ft_strlen(str))) != NULL)
        printf("The string starting with x is %s\n", result);
    else
        printf("The letter x cannot be found in the string\n");

    return (0);
}

/********************  Output should be similar to:  **************

The string starting with x is xing
*/