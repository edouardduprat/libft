/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 19:14:44 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 19:22:43 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*n;
	int		i;

	if (!(s && f))
		return (NULL);
	n = (char *)malloc(sizeof(*n) * (ft_strlen(s) + 1));
	i = 0;
	if (n)
	{
		while (s[i])
		{
			n[i] = f(s[i]);
			i++;
		}
		n[i] = '\0';
	}
	return (n);
}
