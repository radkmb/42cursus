/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:46:28 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:46:29 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ret;

	if (src == NULL)
		return (0);
	ret = ft_strlen(src);
	if (dst == NULL || dstsize == 0)
		return (ret);
	while (dstsize > 1)
	{
		if (*src == '\0')
			break ;
		*dst = *src;
		++dst;
		++src;
		--dstsize;
	}
	*dst = '\0';
	return (ret);
}
