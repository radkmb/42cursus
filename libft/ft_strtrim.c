/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:47:41 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:47:42 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	const char	*start;
	const char	*end;

	if (s1 == NULL)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1);
	while (*start != '\0' && ft_strchr(set, *start) != NULL)
		++start;
	while (start != end && ft_strchr(set, *(end - 1)) != NULL)
		--end;
	if ((ret = (char *)malloc(end - start + 1)) == NULL)
		return (NULL);
	ft_strlcpy(ret, start, end - start + 1);
	return (ret);
}
