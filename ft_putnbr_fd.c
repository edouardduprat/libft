/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 17:19:02 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/07 18:04:47 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long num;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = (num * -1);
	}
	if (num / 10 > 0)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd('0' + (num % 10), fd);
}
