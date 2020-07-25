/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:41:08 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:41:10 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret;
	t_list *tmp;

	ret = NULL;
	if (f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		tmp->next = ret;
		ret = tmp;
		lst = lst->next;
	}
	return (ret);
}
