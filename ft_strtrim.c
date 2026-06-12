/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:12:28 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/10 20:39:07 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int to_trim(char *set, char c)
{
    int i;

    i = 0;
    while(set[i])
    {
        if(c == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  i;
    char    *s1_ptr;
    char    *set_ptr;
    char    *dst;

    if (!s1 || !set)
    {
        return (NULL);
    }

    s1_ptr = (char *) s1;
    set_ptr = (char *) set;
    
    start = 0;
    while (s1_ptr[start] && to_trim(set_ptr, s1_ptr[start]))
    {
        start++;
    }

    end = ft_strlen(s1_ptr);
    while (end > start && to_trim(set_ptr, s1_ptr[end - 1]))
    {
        end--;
    }

    if (start >= end)
    {
        return (ft_strdup(""));
    }

    dst = malloc(sizeof(char) * (end - start + 1));
    if (!dst)
    {
        return (NULL);
    }

    i = 0;
    while (start < end)
    {
        dst[i++] = s1_ptr[start++];
    }
    
    dst[i] = '\0';
    return (dst);
}