/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:48:50 by glasset           #+#    #+#             */
/*   Updated: 2016/05/28 19:36:13 by Guillaume Lasset ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * size + 1);
	if (tmp != NULL)
	{
		ft_bzero(tmp, size + 1);
		return (tmp);
	}
	return (NULL);
}
