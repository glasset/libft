/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:17:33 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 10:05:38 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dst;
	const char	*src;

	dst = s1;
	src = s2;
	if (n != 0 || dst != src)
	{
		if (s1 > s2)
		{
			dst += n;
			src += n;
			while (n--)
				*--dst = *--src;
		}
		else
			ft_memcpy(s1, s2, n);
	}
	return (dst);
}
