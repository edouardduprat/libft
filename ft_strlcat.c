/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:15:55 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 15:38:38 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = 0;
	while (dst[len] && len < size)
		len++;
	if (size == len)
		return (size + ft_strlen(src));
	while (src[index])
	{
		if (index < (size - len - 1))
			dst[len + index] = src[index];
		else
			break ;
		index++;
	}
	dst[len + index] = '\0';
	return (len + ft_strlen(src));
}
