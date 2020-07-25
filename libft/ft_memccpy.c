/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:42:23 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:42:25 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		uc;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (dst);
	uc = (unsigned char)c;
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n-- > 0)
	{
		*(d++) = *(s);
		if (*(s++) == uc)
			return ((void *)(d));
	}
	return (NULL);
}
