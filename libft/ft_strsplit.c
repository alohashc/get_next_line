/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 11:00:02 by alohashc          #+#    #+#             */
/*   Updated: 2016/12/09 11:49:19 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**s2;
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	if (!s || !c)
		return (0);
	s2 = (char**)malloc(sizeof(char*) * ft_countwords(s, c) + 1);
	if (!s2)
		return (0);
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		s2[j] = ft_strsub(s, start, (i - start));
		j++;
	}
	s2[j] = 0;
	return (s2);
}
