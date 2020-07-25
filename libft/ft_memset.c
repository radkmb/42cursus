/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:43:20 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:43:22 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc;
	unsigned char	*str;

	uc = (unsigned char)c;
	str = (unsigned char *)b;
	while (len-- > 0)
		*(str++) = uc;
	return (b);
}
