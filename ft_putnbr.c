/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 15:47:39 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/07 17:17:04 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long num;

	num = (long)n;
	if (num < 0)
	{
		ft_putchar('-');
		num = (num * -1);
	}
	if (num / 10 > 0)
		ft_putnbr(num / 10);
	ft_putchar('0' + (num % 10));
}