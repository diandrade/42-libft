/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:38:59 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/27 15:58:38 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
    char s1[] = "test\200";
    char s2[] = "test\0";

    printf("%d\n", ft_strncmp(s1, s2, 6));
}

/*
else if (arg == 11)
ft_print_result(ft_strncmp("test\200", "test\0", 6));
*/