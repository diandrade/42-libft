/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:05:12 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 22:54:53 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dsize)
{
    size_t  i;
    size_t  j;
    size_t  k;

    j = 0;
    while(j < dsize && dst[j])
    {
        j++;
    }

    if (j == dsize)
    {
        return dsize + ft_strlen(src);
    }

    k = j;
    i = 0;
    while (src[i] && j < dsize - 1)
    {
        dst[j++] = src[i++];   
    }

    dst[j] = '\0';

    return k + ft_strlen(src);
}