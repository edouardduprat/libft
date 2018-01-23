/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 15:02:10 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/21 17:57:06 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_str_len(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			str_len;
	unsigned int	copy_n;

	str_len = get_str_len(n);
	copy_n = n;
	if (n < 0)
	{
		copy_n = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = copy_n % 10 + '0';
	while (copy_n /= 10)
		str[--str_len] = copy_n % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
