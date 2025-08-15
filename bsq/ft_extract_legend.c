/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_legend.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:15:33 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/30 17:12:21 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_extract_signs(char *line, char *signs)
{
	int		i;

	i = ft_strlen(line);
	signs[0] = line[i - 4];
	signs[1] = line[i - 3];
	signs[2] = line[i - 2];
	return (0);
}

int	ft_extract_number(char *line)
{
	int		i;

	i = ft_strlen(line);
	line[i - 4] = '\0';
	line[i - 3] = '\0';
	line[i - 2] = '\0';
	i = 0;
	while (line[i] != '\0')
	{
		if (!(line[i] >= '0' && line[i] <= '9'))
			return (-1);
		i++;
	}
	return (ft_atoi(line));
}

char	*ft_extract_first_line(int	fd)
{
	char	*line;
	int		fd;
	int		i;

	if (fd == -1)
		return (NULL);
	line = (char *)malloc(1024);
	if (!line)
	{
		line = NULL;
		return (line);
	}
	i = 0;
	while (read(fd, &line[i], 1))
		if (line[i++] == '\n')
			break ;
	if (close(fd) == -1)
		return (NULL);
	return (line);
}
