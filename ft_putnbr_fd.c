/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 19:16:35 by diandrade         #+#    #+#             */
/*   Updated: 2026/06/08 20:16:22 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long  lnb;

    lnb = n;

    if (lnb < 0)
    {
        lnb = -lnb;
        ft_putchar_fd('-', fd);
    }

    if (lnb >= 0 && lnb <= 9)
    {
        lnb += 48;
        ft_putchar_fd(lnb, fd);
        return;
    }
    else
    {
        ft_putnbr_fd(lnb / 10, fd);
        ft_putnbr_fd(lnb % 10, fd);  
    }
}