/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:46:18 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:46:19 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	d_len = 0;
	s_len = ft_strlen(src);
	while (dstsize != 0 && *dst != '\0')
	{
		++d_len;
		++dst;
		--dstsize;
	}
	if (dstsize == 0)
		return (d_len + s_len);
	while (*src != '\0' && dstsize > 1)
	{
		*dst = *src;
		++dst;
		++src;
		--dstsize;
	}
	*dst = '\0';
	return (d_len + s_len);
}
