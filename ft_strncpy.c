/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/21 16:40:21 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/21 17:27:05 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(src) && i < len)
	{
		if (src[i] == '\0')
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
