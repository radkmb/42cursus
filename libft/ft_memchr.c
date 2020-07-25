/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:42:35 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:42:36 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	uc;
	unsigned char	*str;

	uc = (unsigned char)c;
	str = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*str == uc)
			return ((void *)str);
		++str;
	}
	return (NULL);
}
