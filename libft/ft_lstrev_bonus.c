/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:41:55 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:41:57 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **lst)
{
	t_list *prev_elem;
	t_list *tmp;

	if (lst == NULL || *lst == NULL)
		return ;
	prev_elem = NULL;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		(*lst)->next = prev_elem;
		prev_elem = *lst;
		if (tmp == NULL)
			return ;
		*lst = tmp;
	}
}
