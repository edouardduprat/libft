/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 13:14:22 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/10 14:21:33 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*string;
	size_t	i;

	string = (char*)malloc(size + 1);
	i = 0;
	if (string)
	{
		while (string[i])
		{
			string[i] = '\0';
			i++;
		}
	}
	return (string);
}
