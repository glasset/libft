/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:45:22 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 13:26:46 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int			ft_lint(int n)
{
	int				c;
	unsigned int	f;

	c = 0;
	if (n == 0)
		c++;
	if (n < 0)
	{
		f = n * (-1);
		c++;
	}
	else
		f = n;
	while (f > 0)
	{
		f = f / 10;
		c++;
	}
	return (c);
}

char				*ft_itoa(int n)
{
	char			*c;
	int				i;
	unsigned int	f;

	i = ft_lint(n);
	if (!(c = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	c[i] = '\0';
	n != 0 ? n != 0 : (c[0] = '0');
	if (n != 0)
	{
		if (n < 0)
		{
			c[0] = '-';
			f = n * (-1);
		}
		else
			f = n;
		while (f > 0)
		{
			c[--i] = (f % 10) + '0';
			f = f / 10;
		}
	}
	return (c);
}
