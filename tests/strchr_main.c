/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:57:49 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/27 17:32:42 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char    s[] = "bonjour";
    int c = '\0';

    printf("%d", *ft_strchr(s, c));
}

/*
char		*str;
char		str2[] = "bonjour";
int			arg;

else if (arg == 5)
	{
		if (!(str = ft_strchr(str2, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str2 + 7)
				ft_print_result("\nReturn value is false");
		}
	}
	else if (arg == 6)
	{
		char	str3[] = "";
		if (!(str = ft_strchr(str3, '\0')))
			ft_print_result("NULL");
		else
		{
			ft_print_result(str);
			if (str != str3)
				ft_print_result("\nReturn value is false");
		}
	}
	return (0);


*/