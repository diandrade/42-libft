int main(void)
{
    char target[80];

    // Teste 1
    ft_memset(target, 'j', 30);
    if (target != ft_memcpy(target, "zyxwvutsrqponmlkjihgfedcba", 14))
        write(1, "dest's adress was not returned\n", 31);
    write(1, target, 30);
    write(1, "\n", 1);

    // Teste 2
    ft_memset(target, 'j', 30);
    if (target != ft_memcpy(target, "zyxwvutst", 0))
        write(1, "dest's adress was not returned\n", 31);
    write(1, target, 30);
    write(1, "\n", 1);

    // Teste 3
    ft_memset(target, 'j', 30);
    if (target != ft_memcpy(target, "zy\0xw\0vu\0\0tsr", 11))
        write(1, "dest's adress was not returned\n", 31);
    write(1, target, 30);
    write(1, "\n", 1);

    return (0);
}