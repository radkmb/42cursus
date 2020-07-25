/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:42:13 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:42:15 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		ret;

	if (lst == NULL)
		return (0);
	ret = 0;
	while (lst != NULL)
	{
		++ret;
		lst = lst->next;
	}
	return (ret);
}
