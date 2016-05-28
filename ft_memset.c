/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:16:32 by glasset           #+#    #+#             */
/*   Updated: 2015/03/04 13:31:01 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		new_s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
