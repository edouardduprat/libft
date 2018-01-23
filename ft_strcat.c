/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 15:27:08 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 15:28:50 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s1[length])
	{
		length++;
	}
	while (s2[i])
	{
		s1[length + i] = s2[i];
		i++;
	}
	s1[length + i] = '\0';
	return (s1);
}
