/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glasset <glasset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 17:26:31 by glasset           #+#    #+#             */
/*   Updated: 2016/07/11 10:05:31 by glasset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*res;

	if (!f && !lst)
		return (NULL);
	tmp = f(lst);
	res = ft_lstnew(tmp->content, tmp->content_size);
	tmp = res;
	lst = lst->next;
	while (lst)
	{
		new = f(lst);
		tmp->next = ft_lstnew(new->content, new->content_size);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (res);
}
