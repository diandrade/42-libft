/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 22:35:26 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/30 00:03:20 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *str1 = (char *) s;
    
    i = 0;
    while(i < n)
    {
        str1[i++] = (char) c;
    }
    
    s = str1;
    return s;
}