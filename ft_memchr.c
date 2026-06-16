/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieandra <dieandra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 11:23:28 by dieandra         #+#    #+#             */
/*   Updated: 2026/06/16 15:47:22 by dieandra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_ptr;

	if (!s)
		return (NULL);
	s_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (c == s_ptr[i])
			return ((void *)&s_ptr[i]);
		i++;
	}
	return (NULL);
}
