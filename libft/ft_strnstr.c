/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:47:09 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:47:11 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;

	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)(haystack));
	while (*haystack != '\0' && len >= len_needle)
	{
		if (ft_strncmp(haystack, needle, len_needle) == 0)
			return ((char *)(haystack));
		++haystack;
		--len;
	}
	return (NULL);
}
