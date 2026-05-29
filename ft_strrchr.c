/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:04:36 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 17:04:59 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int isCharFound;
    char* charAddress;

    i = 0;
    isCharFound = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            charAddress = (char *) &s[i];
            isCharFound = 1;
        }
        i++;
    }

    if (isCharFound == 1)
    {
        return charAddress;
    }

    if (s[i] == c)
    {
        return (char *) &s[i];
    }

    return NULL;
}