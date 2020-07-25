/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:41:44 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:41:45 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ret;

	if ((ret = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	ret->content = content;
	ret->next = NULL;
	return (ret);
}
