/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieandra <dieandra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:45:20 by dieandra         #+#    #+#             */
/*   Updated: 2026/06/16 15:42:25 by dieandra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(long n)
{
	int	qtd_digits;

	qtd_digits = 0;
	while (n > 0)
	{
		n /= 10;
		qtd_digits++;
	}
	return (qtd_digits);
}

static char	*ft_allocate_string(int qtd_digits, int minus)
{
	char	*int_to_char;

	if (minus == 1)
	{
		int_to_char = malloc(sizeof(char) * (qtd_digits + 2));
		if (!int_to_char)
			return (NULL);
		int_to_char[0] = '-';
	}
	else
	{
		int_to_char = malloc(sizeof(char) * (qtd_digits + 1));
		if (!int_to_char)
			return (NULL);
	}
	return (int_to_char);
}

static void	ft_fill_string(char *int_to_char, long n_cpy, int qtd_digits,
		int minus)
{
	int	i;

	i = qtd_digits;
	int_to_char[i + minus] = '\0';
	while (i > 0)
	{
		int_to_char[i - 1 + minus] = (char)(n_cpy % 10) + 48;
		n_cpy /= 10;
		i--;
	}
}

static char	*ft_handle_special_cases(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == 2147483647)
		return (ft_strdup("2147483647"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*int_to_char;
	long	n_cpy;
	int		qtd_digits;
	int		minus;

	int_to_char = ft_handle_special_cases(n);
	if (int_to_char)
		return (int_to_char);
	minus = 0;
	if (n < 0)
	{
		minus = 1;
		n *= -1;
	}
	n_cpy = n;
	qtd_digits = ft_count_digits(n);
	int_to_char = ft_allocate_string(qtd_digits, minus);
	if (!int_to_char)
		return (NULL);
	ft_fill_string(int_to_char, n_cpy, qtd_digits, minus);
	return (int_to_char);
}
