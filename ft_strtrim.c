/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:43:55 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 10:03:23 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char		*res;
	char const	*s1;
	size_t		len;

	if (!s)
		return (NULL);
	s1 = s;
	while (*s1)
		s1++;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while ((*(s1 - 1) == ' ' || *(s1 - 1) == '\n' || *(s1 - 1) == '\t'))
		s1--;
	len = s1 - s < 0 ? 0 : s1 - s;
	res = (char *)malloc(sizeof(*s) * (len + 1));
	if (res != NULL)
	{
		while (s < s1)
			*res++ = *s++;
		*res = '\0';
		return (res - len);
	}
	else if (res)
		return (res);
	return (NULL);
}
