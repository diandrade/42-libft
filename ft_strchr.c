/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:04:28 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 17:04:51 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return (char *) &s[i];
        }
        i++;
    }

    if (s[i] == c)
    {
        return (char *) &s[i];
    }

    return NULL;
}