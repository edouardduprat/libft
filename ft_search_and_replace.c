/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_and_replace.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduprat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/14 15:45:38 by eduprat           #+#    #+#             */
/*   Updated: 2017/12/14 17:35:29 by eduprat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search)
			ft_putchar(replace);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	ft_search_and_replace("12", '2', '3');
	return (0);
}
