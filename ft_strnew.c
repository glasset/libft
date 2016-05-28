/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:48:50 by glasset           #+#    #+#             */
/*   Updated: 2016/05/28 18:40:52 by Guillaume Lasset ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;

	tmp = (char *)malloc(size + 1);
	if (tmp)
	{
		ft_bzero(tmp, size);
		return (tmp);
	}
	return (NULL);
}
