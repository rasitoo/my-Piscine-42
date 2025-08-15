/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:58:44 by dsanz-ro          #+#    #+#             */
/*   Updated: 2025/07/30 17:42:51 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_sq	ft_find_biggest_sq(t_mapinfo info)
{
	t_sq		biggest;
	int			**dp;
	int			i;
	int			j;

	dp = ft_allocate_dp(info.rows, info.cols);
	if (!dp)
		return ((t_sq){0, 0, 0});
	biggest = (t_sq){0, 0, 0};
	i = -1;
	while (++i < info.rows)
	{
		j = -1;
		while (++j < info.cols)
		{
			dp[i][j] = ft_compute_cell_value(dp, info, i, j);
			ft_update_best_sq(&biggest, dp[i][j], i, j);
		}
	}
	ft_free_dp(dp, info.rows);
	return (biggest);
}

t_mapinfo	*ft_parse_map(char *filename, char *signs)
{
	int			fd;
	t_mapinfo	*m;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	m = t_init_mapinfo(signs);
	if (!m)
		return (NULL);
	m->map = ft_read_lines(fd, &m->rows, signs, &m->cols);
	close(fd);
	if (!m->map)
	{
		free(m);
		return (NULL);
	}
	return (m);
}

char	**ft_read_lines(int fd, int *rows, char *signs, int *cols)
{
	char	*buf;
	char	**arr;
	int		count;
	int		width;

	arr = NULL;
	count = 0;
	width = -1;
	buf = ft_get_line(fd);
	while (buf != NULL)
	{
		if (!ft_is_line_valid(buf, signs))
			return (ft_free_lines(arr, count));
		if (width < 0)
			width = ft_strlen(buf);
		else
			if ((int)ft_strlen(buf) != width)
				return (ft_free_lines(arr, count));
		arr = ft_arr_add(arr, buf, count++);
	}
	*rows = count;
	*cols = width;
	return (arr);
}

char	*ft_get_line(int fd)
{
	char	*buf;
	int		i;

	while (read(fd, &buf[i], 1) > 0)
		if (buf[i++] == '\n')
			break ;
	if (i == 0)
	{
		free(buf);
		return (NULL);
	}
	buf[i] = '\0';
	return (buf);
}
