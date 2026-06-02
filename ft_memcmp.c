/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 20:02:15 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/29 22:32:49 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1 = (char *) s1;
    char *str2 = (char *) s2;

    if (n == 0)
    {
        return (0);
    }

    return ft_strncmp(str1, str2, n);
}