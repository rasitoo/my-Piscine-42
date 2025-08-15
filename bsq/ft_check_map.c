/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:26:15 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/30 15:59:08 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_signs(char *signs)
{
	int	i;
	int	j;

	i = 0;
	while (signs[i] != '\0')
	{
		j = i;
		while (signs[j] != '\0')
		{
			if (signs[i] == signs [++j])
				return (1);
		}
		i++;
	}
	return (0);
}

int	ft_check_sign_valid(char c, char *signs)
{
	int	i;

	i = 0;
	while (signs[i] != '\0')
		if (c == signs[i++])
			return (1);
	return (0);
}

int	ft_check_lengths_signs(char *argv, char *signs)
{
	char	*line;
	int		fd;
	int		length;
	int		i;

	fd = open(argv, O_RDONLY);
	line = ft_create_buffer(4096);
	if (line == NULL || fd == -1)
		return (-1);
	length = -1;
	i = 0;
	while (read(fd, &line[i], 1))
		if (line[i++] == '\n')
			break ;
	i = ft_is_line_valid(i, signs, fd, &length);
	if (i == -1)
		return (-1);
	if (close(fd) == -1)
		return (-1);
	if ((length - 1) > 0)
		return (length - 1);
	else
		return (-1);
}

int	ft_is_line_valid(int i, char *signs, int fd, int *length)
{
	char	*line;

	line = ft_create_buffer(4096);
	if (line == NULL)
		return (-1);
	i = 0;
	while (read(fd, &line[i], 1))
	{
		if (!(ft_check_sign_valid(line[i], signs) || line[i] == '\n'))
			return (-1);
		if (line[i++] == '\n')
		{
			if (*length == -1)
				*length = ft_strlen(line);
			else
				if (*length != ft_strlen(line))
					return (-1);
			i = 0;
			free(line);
			line = ft_create_buffer(4096);
			if (line == NULL)
				return (-1);
		}
	}
	return (0);
}

