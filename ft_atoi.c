/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:52:59 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/08 12:12:05 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    size_t  i;
    size_t  operator;
    size_t  totalsum;
    char    *nptr_ptr;

    nptr_ptr = (char *) nptr;
    
    i = 0;
    while((nptr_ptr[i] >= 7 && nptr_ptr[i] <= 13) || (nptr_ptr[i] == 32))
    {
        i++;
    }

    operator = 1;
    if (nptr_ptr[i] == '-' || nptr_ptr[i] == '+')
    {
        if (nptr_ptr[i] == '-')
        {
            operator *= -1;
        }
        i++;
    }

    totalsum = 0;
    while(nptr_ptr[i] >= '0' && nptr_ptr[i] <= '9')
    {
        totalsum = totalsum * 10 + nptr_ptr[i] - 48; 
        i++;
    }

    return totalsum * operator;
}