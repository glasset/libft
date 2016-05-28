/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:26:22 by glasset           #+#    #+#             */
/*   Updated: 2015/03/04 14:18:11 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;

	tmp = s1;
	while (*s1)
		s1++;
	while (n-- && *s2)
	{
		*s1++ = *s2++;
	}
	*s1 = 0;
	return (tmp);
}
