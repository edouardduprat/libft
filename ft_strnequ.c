/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 15:05:11 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/14 15:19:29 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;
	size_t count;

	if (!(s1 && s2))
		return (0);
	i = 0;
	count = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[i])
			count++;
		i++;
	}
	return (count == i);
}
