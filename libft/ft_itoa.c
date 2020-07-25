/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:34:01 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:34:05 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_size(long n)
{
	size_t	ret;

	if (n == 0)
		return (1);
	ret = 0;
	if (n < 0)
	{
		n = -n;
		++ret;
	}
	while (n > 0)
	{
		n /= 10;
		++ret;
	}
	return (ret);
}

char			*ft_itoa(int n)
{
	char	*ret;
	size_t	size;
	long	abs_n;

	abs_n = (n < 0) ? -1 * (long)n : n;
	size = count_size(n);
	if ((ret = (char *)malloc(size + 1)) == NULL)
		return (NULL);
	ret[size] = '\0';
	if (n == 0)
	{
		*ret = '0';
		return (ret);
	}
	while (abs_n > 0)
	{
		ret[--size] = abs_n % 10 + '0';
		abs_n /= 10;
	}
	if (size == 1)
		ret[0] = '-';
	return (ret);
}
