/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:38:44 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:39:25 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *last;
	t_list *tmp;

	if (lst == NULL || del == NULL)
		return ;
	last = *lst;
	while (last != NULL)
	{
		tmp = last->next;
		ft_lstdelone(last, del);
		last = tmp;
	}
	*lst = NULL;
}
