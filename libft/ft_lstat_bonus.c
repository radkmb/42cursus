/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:34:42 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:34:43 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstat(t_list *lst, unsigned int nb)
{
	while (lst != NULL && nb > 0)
	{
		lst = lst->next;
		--nb;
	}
	return (lst);
}
