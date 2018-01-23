/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:20:54 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 18:50:38 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long i;
	long val;
	long sign;

	i = 0;
	val = 0;
	sign = 1;
	while (IS_SPACE(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
		val = (val * 10) + (str[i++] - '0');
	return (val * sign);
}
