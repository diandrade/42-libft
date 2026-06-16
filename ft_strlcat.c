/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieandra <dieandra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 17:05:12 by dieandra         #+#    #+#             */
/*   Updated: 2026/06/16 16:10:47 by dieandra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (!dst && dsize == 0)
		return (ft_strlen(src));
	j = 0;
	while (dst[j] && j < dsize)
		j++;
	if (j == dsize)
		return (dsize + ft_strlen(src));
	k = j;
	i = 0;
	while (src[i] && j < dsize - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (k + ft_strlen(src));
}
