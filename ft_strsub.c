/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 15:20:00 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/14 15:25:20 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * (len + 1));
	i = 0;
	if (new)
	{
		while (i < len)
			new[i++] = s[start++];
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
