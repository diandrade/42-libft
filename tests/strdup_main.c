int main(void)
{
    const char  original[] = "lorem ipsum dolor sit amet";
    char        *copia;

    copia = ft_strdup(original);

    if (copia)
    {
        printf("Cópia: %s\n", copia);
        free(copia);
    }
    else
    {
        printf("Retorno foi NULL\n");
    }

    return (0);
}