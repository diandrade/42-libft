/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 01:46:28 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/02 16:25:46 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    *src_ptr;
    char    *dest_ptr;

    if (!dest && !src)
    {
        return (NULL);
    }

    dest_ptr = (char *)dest;
    src_ptr = (char *)src;
    
    i = 0;
    if (dest_ptr > src_ptr)
    {
        while(n-- > 0)
        {
            dest_ptr[n] = src_ptr[n];
        }   
    }
    else
    {
        while (i++ < n)
        {
            dest_ptr[i] = src_ptr[i];
        }
    }
    
    return (dest);
}