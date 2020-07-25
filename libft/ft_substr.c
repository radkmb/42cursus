/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:47:54 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:47:55 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	end;
	size_t	size;

	if (s == NULL)
		return (NULL);
	end = ft_strlen(s);
	if (end < start)
		return (ft_strdup(""));
	size = (end - start < len) ? end - start : len;
	if ((ret = (char *)malloc(size + 1)) == NULL)
		return (NULL);
	ft_strlcpy(ret, s + start, size + 1);
	return (ret);
}
