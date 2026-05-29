/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:04:23 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 22:50:59 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dsize)
{
    size_t  i;

    if (dsize == 0)
    {
        return ft_strlen(src);
    }

    i = 0;
    while (src[i] && i < dsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return ft_strlen(src);
}