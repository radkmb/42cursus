/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 00:58:03 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/15 00:58:05 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		count_size(const char *s, char c)
{
	const char	*iter;
	size_t		ret;

	ret = 0;
	iter = s;
	while (*s != '\0')
	{
		if (*iter == c || *iter == '\0')
		{
			if (s < iter)
				++ret;
			if (*iter == '\0')
				break ;
			s = iter + 1;
		}
		++iter;
	}
	return (ret);
}

static unsigned int	fill_str(char **ret, const char *s, char c)
{
	unsigned int	count;
	const char		*iter;

	iter = s;
	count = 0;
	while (*s != '\0')
	{
		if (*iter == c || *iter == '\0')
		{
			if (s < iter)
			{
				if ((*ret = (char *)malloc(iter - s + 1)) == NULL)
					break ;
				ft_strlcpy(*(ret++), s, iter - s + 1);
				++count;
			}
			if (*iter == '\0')
				break ;
			s = iter + 1;
		}
		++iter;
	}
	*ret = NULL;
	return (count);
}

char				**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	size;
	char	**ret;

	if (s == NULL)
		return (NULL);
	size = count_size(s, c);
	if ((ret = (char **)malloc((size + 1) * sizeof(char *))) == NULL)
		return (NULL);
	if ((count = fill_str(ret, s, c)) < size)
	{
		while (count > 0)
			free(ret[--count]);
		free(ret);
		return (NULL);
	}
	return (ret);
}
