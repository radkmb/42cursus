/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfukuda <rfukuda@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 04:55:33 by rfukuda           #+#    #+#             */
/*   Updated: 2020/07/23 06:14:06 by rfukuda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buff;
	size_t	i;

	if (!(buff = (void *)malloc(size * nmemb)))
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		*((char *)buff + i) = 0;
		i++;
	}
	return (buff);
}

static char	*stack_buff_join(char *stack, char *buff)
{
	char	*tmp;

	tmp = ft_strjoin(stack, buff);
	free(stack);
	free(buff);
	return (tmp);
}

static char	*update_line(char *stack, int ret)
{
	char	*line;
	int		i;

	line = 0;
	i = 0;
	if (ret == 0)
		line = ft_strdup(stack);
	else if (ret > 0)
	{
		while (stack[i] != '\n')
			i++;
		line = ft_substr(stack, 0, i);
	}
	return (line);
}

static char	*update_stack(char *stack, int ret)
{
	int		i;
	char	*tmp;

	tmp = 0;
	i = 0;
	if (ret > 0)
	{
		while (stack[i] != '\n')
			i++;
		tmp = ft_strdup(stack + i + 1);
	}
	free(stack);
	stack = NULL;
	return (tmp);
}

int			get_next_line(int fd, char **line)
{
	static char	*stack[OPEN_MAX];
	int			ret;
	char		*buff;

	if (fd < 0 || BUFFER_SIZE <= 0 || !line)
		return (-1);
	ret = 1;
	if (stack[fd] == 0)
		stack[fd] = ft_strdup("");
	while (ft_strchr(stack[fd], '\n') == 0 && ret > 0)
	{
		if (!(buff = ft_calloc(1, BUFFER_SIZE + 1)) ||
				(ret = read(fd, buff, BUFFER_SIZE)) < 0)
			return (-1);
		stack[fd] = stack_buff_join(stack[fd], buff);
	}
	*line = update_line(stack[fd], ret);
	stack[fd] = update_stack(stack[fd], ret);
	return (ret > 0 ? 1 : ret);
}
