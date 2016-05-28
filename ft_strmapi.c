/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:53:18 by glasset           #+#    #+#             */
/*   Updated: 2016/05/28 18:41:35 by Guillaume Lasset ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*tmp;
	unsigned int		i;

	i = 0;
	tmp = (char*)malloc(sizeof(s) * ft_strlen(s) + 1);
	if (tmp == NULL)
	{
		return NULL;
	}
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	return (tmp);
}
