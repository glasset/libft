/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:17:33 by glasset           #+#    #+#             */
/*   Updated: 2016/05/28 18:40:53 by Guillaume Lasset ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	void	*tmp2;
	void	*tmp;
	size_t	i;

	tmp = s1;
	tmp2 = malloc(n);
	ft_strcpy(tmp2, (const char*)s2);
	i = 0;
	while (i < n)
	{
		*tmp++ = *tmp2++;
		i++;
	}
	return (s1);
}
