/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:46:49 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/14 02:46:50 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if ((ret = (char *)malloc(ft_strlen(s) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ret[i] = (*f)(i, s[i]);
		++i;
	}
	ret[i] = '\0';
	return (ret);
}
