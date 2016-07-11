/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:52:18 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 09:58:14 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (tmp)
	{
		while (s[i])
		{
			tmp[i] = f(s[i]);
			i++;
		}
		tmp[i] = 0;
		return (tmp);
	}
	return (NULL);
}
