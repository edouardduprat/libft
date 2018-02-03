/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:01:14 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/22 17:46:50 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t index;
	size_t next;
	size_t little_length;

	index = 0;
	little_length = 0;
	if (little[index] == '\0')
		return ((char *)big);
	while (little[little_length] && little_length <= len)
	{
		little_length++;
	}
	while (big[index] && index <= len)
	{
		next = 0;
		while (big[index + next] == little[next] &&
				little[next] && index + next < len)
			next++;
		if (next == little_length)
			return ((char *)(big + index));
		index++;
	}
	return (NULL);
}
