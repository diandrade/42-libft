/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:05:25 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/08 19:12:44 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i++], 1);
    }
    ft_putchar_fd('\n', fd);
}