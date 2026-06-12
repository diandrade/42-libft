/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:53:14 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/10 16:10:20 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr_s1 = (char *) s1;
    char *ptr_s2 = (char *) s2;
    char *dst = malloc(ft_strlen(ptr_s1) + ft_strlen(ptr_s2) + 1);
    size_t  i;
    size_t  j;

    i = 0;
    while (ptr_s1[i])
    {
        dst[i] = ptr_s1[i];
        i++;
    }

    j = i;
    i = 0;
    while(ptr_s2[i])
    {
        dst[j++] = ptr_s2[i++];  
    }

    dst[j] = '\0';

    return dst;
}