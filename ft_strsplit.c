/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:44:40 by glasset           #+#    #+#             */
/*   Updated: 2015/03/04 14:20:07 by glasset          ###   ########.fr       */
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
	int		j;
	int		q;
	int		t[2];

	t[0] = 0;
	q = ft_count(s, c);
	tmp = (char **)malloc(sizeof(char *) * (q + 1));
	while (*s && q > t[0])
	{
		t[1] = 0;
		j = 0;
		while (*s == c)
			s++;
		while (s[t[1]] != c && s[t[1]])
			t[1]++;
		tmp[t[0]] = (char *)malloc(sizeof(char) * (t[1] + 1));
		if (tmp[t[0]] == 0 && tmp == 0)
			return (NULL);
		while (t[1] > j && (*s != c || *s != '\0'))
			tmp[t[0]][j++] = *s++;
		tmp[t[0]++][t[1]] = 0;
	}
	tmp[t[0]] = NULL;
	return (tmp);
}
