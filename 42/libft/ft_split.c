/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidro2 <davidro2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:30:48 by davidro2          #+#    #+#             */
/*   Updated: 2023/10/13 14:19:34 by davidro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countc(char *str, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (str[i] != c)
			w++;
			while (str[i] != c j
		i++;
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	int	countc;
	int	x;
	int	y;

	countc = ft_countc(s, c);
	x = 
}
