/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 19:35:12 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/27 12:08:05 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		leading_ws(char const *str)
{
	int i;

	i = 0;
	while (ft_is_white_space(str[i]))
		i++;
	return (i);
}

static int		trailing_ws(char const *str)
{
	int i;
	int length;

	length = ft_strlen(str) - 1;
	i = length;
	while (i > 0 && (ft_is_white_space(str[i]) || str[i] == '\0'))
		i--;
	return (length - i);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		iterator;
	int		length;
	int		head;

	if (!s)
		return (NULL);
	head = leading_ws(s);
	length = ft_strlen(s) - head - trailing_ws(s);
	if (length < 0)
		return (ft_strcpy((char*)malloc(sizeof(char) + 1), ""));
	str = (char *)malloc(sizeof(*str) * (length + 1));
	if (!str)
		return (NULL);
	i = 0;
	iterator = head;
	while (iterator < head + length)
		str[i++] = s[iterator++];
	str[i] = '\0';
	return (str);
}
