/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 16:01:05 by eduprat           #+#    #+#             */
/*   Updated: 2018/02/02 17:59:13 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchar(char *src, char c)
{
	char	*new;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new = (char *)malloc(sizeof(new) * (i + 1 + 1));
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i++] = c;
	new[i] = '\0';
	return (new);
}
