/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:04:33 by diandrade         #+#    #+#             */
/*   Updated: 2026/05/28 22:50:54 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t firstOccurrencePosition;

    i = 0;
    while(big[i] && i < len)
    {
        j = 0;
        if(big[i] == little[j])
        {
            firstOccurrencePosition = i;
        }
   
        while(big[i] == little[j] && i < len)
        {
            i++;
            j++;
        }

        if (j == ft_strlen(little))
        {
            return (char *) &big[firstOccurrencePosition];
        }
        i++;
    }

    return NULL;
}