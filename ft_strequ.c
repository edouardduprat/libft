/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:01:51 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/14 14:20:56 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	i;
	int count;

	if (!(s1 && s2))
		return (0);
	i = 0;
	count = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
			count++;
		i++;
	}
	return (count == i && ft_strlen(s1) == ft_strlen(s2));
}
