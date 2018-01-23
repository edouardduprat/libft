/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:58:20 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 16:00:38 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int next;
	int little_length;

	i = 0;
	little_length = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (little[little_length])
	{
		little_length++;
	}
	while (big[i])
	{
		next = 0;
		while (big[i + next] == little[next] && little[next])
		{
			next++;
		}
		if (next == little_length)
			return ((char *)(big + i));
		i++;
	}
	return (0);
}
