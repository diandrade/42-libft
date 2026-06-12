/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:57:32 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/08 16:33:28 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  i;
    char    *src = (char *) s;
    char    *dst = malloc(sizeof(char) * ft_strlen(s) + 1);
    
    i = 0;
    while(i < ft_strlen(src))
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = 0;

    return dst;
}

