/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:27:35 by glasset           #+#    #+#             */
/*   Updated: 2015/03/04 14:19:09 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	int			j;

	i = 0;
	if (*s2 == 0)
		return ((char*)s1);
	while (i < n && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s1[i + j])
		{
			j++;
		}
		if (s2[j] == '\0' && (i + j) <= n)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
