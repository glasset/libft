/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:48:50 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 09:58:55 by glasset          ###   ########.fr       */
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
