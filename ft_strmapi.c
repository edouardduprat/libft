/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 19:23:26 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/17 19:25:19 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			n[i] = f(i, s[i]);
			i++;
		}
		n[i] = '\0';
	}
	return (n);
}
