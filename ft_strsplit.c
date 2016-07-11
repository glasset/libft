/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:44:40 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 13:32:18 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int		i;
	int		n_words;

	i = 1;
	n_words = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			n_words++;
		i++;
	}
	if (s[i] == 0 && s[i - 1] != c)
		n_words++;
	return (n_words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tmp;
	int		t[4];

	t[0] = 0;
	if (!s || !c)
		return (NULL);
	t[3] = ft_count(s, c);
	if (!(tmp = (char **)malloc(sizeof(char *) * (t[3] + 1))))
		return (NULL);
	while (*s && t[3] > t[0])
	{
		t[1] = 0;
		t[2] = 0;
		while (*s == c)
			s++;
		while (s[t[1]] != c && s[t[1]])
			t[1]++;
		if (!(tmp[t[0]] = malloc(sizeof(char) * (t[1] + 1))) && tmp == 0)
			return (NULL);
		while (t[1] > t[2] && (*s != c || *s != '\0'))
			tmp[t[0]][t[2]++] = *s++;
		tmp[t[0]++][t[1]] = 0;
	}
	tmp[t[0]] = NULL;
	return (tmp);
}
