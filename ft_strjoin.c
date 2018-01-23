/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 15:35:08 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/14 16:47:05 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;
	int		iterator;

	if (!(s1 && s2))
		return (NULL);
	string = (char *)malloc(sizeof(*string) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!string)
		return (NULL);
	i = 0;
	iterator = 0;
	while (s1[iterator])
		string[i++] = s1[iterator++];
	iterator = 0;
	while (s2[iterator])
		string[i++] = s2[iterator++];
	string[i] = '\0';
	return (string);
}
