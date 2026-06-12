/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:21:02 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/10 14:47:27 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *conv = (char *) s;
    char    *dst = malloc(ft_strlen(&conv[start + 1]) + 1);
    size_t  i;
    size_t  j;

    j = 0;
    i = start;
    while(i < start + len && conv[i])
    {
        dst[j++] = conv[i++];
    }

    dst[j] = '\0';
    return dst;
}