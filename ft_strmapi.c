/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 11:39:15 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/10 12:18:34 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *conv = (char *) s;
    char    *dst = malloc(ft_strlen(conv) + 1);
    size_t  i;

    i = 0;
    while(conv[i])
    {
        dst[i] = (*f) (i, conv[i]);
        i++;
    }
    
    dst[i] = '\0';
    return dst;
}
