/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:51:00 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/08 15:32:19 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *tmp;
    size_t  i;

    i = 0;
    tmp = malloc(size * nmemb);
    while (i < size * nmemb)
    {
        tmp[i++] = 0;
    }

    return tmp;
}