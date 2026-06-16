/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieandra <dieandra@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:12:28 by dieandra         #+#    #+#             */
/*   Updated: 2026/06/16 16:12:20 by dieandra        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dst;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && to_trim((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && to_trim((char *)set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	dst = malloc(sizeof(char) * (end - start + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, &s1[start], end - start + 1);
	return (dst);
}
