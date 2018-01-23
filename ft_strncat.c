/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:24:23 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 15:32:40 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t length;

	i = 0;
	length = 0;
	while (s1[length])
	{
		length++;
	}
	while (s2[i] && i < n)
	{
		s1[length++] = s2[i++];
	}
	s1[length] = '\0';
	return (s1);
}
