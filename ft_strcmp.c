/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:28:59 by glasset           #+#    #+#             */
/*   Updated: 2015/03/04 14:02:23 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int	u;

	u = 0;
	while (s1[u] || s2[u])
	{
		if (s1[u] != s2[u])
			return ((unsigned char)s1[u] - (unsigned char)s2[u]);
		u++;
	}
	return (0);
}
