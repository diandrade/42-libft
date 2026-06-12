/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:45:20 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/11 13:53:38 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_itoa(int n)
{
    char    *int_to_char;
    long n_cpy;
    int qtd_digits;
    int i;
    int minus;

    if (n == 0)
    {
        return "0";
    }

    if (n == 2147483647)
    {
        return "2147483647";
    }

    if (n == -2147483648)
    {
        return "-2147483648";
    }

    minus = 0;
    if (n < 0){
        minus = 1;
        n *= -1;
    }

    n_cpy = n;
    qtd_digits = 0;
    while (n > 0)
    {
        n /= 10;
        qtd_digits++;
    }

    if (minus == 1)
    {
        int_to_char = malloc(sizeof(char) * qtd_digits + 2);
        int_to_char[0] = '-';
    }
    else
    {
        int_to_char = malloc(sizeof(char) * qtd_digits + 1);
    }

    i = qtd_digits;
    int_to_char[i + minus] = '\0';
    
    while (i > 0)
    {
        int_to_char[i - 1 + minus] = (char) (n_cpy % 10) + 48;
        n_cpy /= 10;
        i--;
    }

    return int_to_char;
}

