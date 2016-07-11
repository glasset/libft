/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:38:00 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 10:00:01 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * len + 1);
	if (tmp != NULL)
	{
		while (len--)
		{
			tmp[i] = s[start];
			start++;
			i++;
		}
		tmp[i] = 0;
		return (tmp);
	}
	return (NULL);
}
