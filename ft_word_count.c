/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 12:21:35 by eduprat           #+#    #+#             */
/*   Updated: 2018/01/31 13:01:18 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word_count(char *str)
{
	int		index;
	int		word;
	int		count;

	index = 0;
	word = 1;
	count = 1;
	while (str[index] != '\0')
	{
		if (str[index] != ' ' && str[index] != '\t'
				&& str[index] != '\n')
			word = 1;
		else if (word == 1)
		{
			count += 1;
			word = 0;
		}
		index++;
	}
	return (count);
}
