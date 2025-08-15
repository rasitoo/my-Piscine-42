/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:15:54 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/30 16:01:32 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char *argv[])
{
	int		lines;
	char	*line;
	char	signs[4];

	if (argc <= 1)
		return (1);
	line = ft_extract_first_line(argv[1]);
	if (ft_extract_signs(line, signs))
		return (2);
	if (ft_check_signs(signs))
	{
		write(2, "map error\n", 10);
		return (6);
	}
	// printf("%s", signs);
	lines = ft_extract_number(line);
	if (lines == -1 || ft_check_lengths_signs(argv[1], signs) == -1)
	{
		write(2, "map error\n", 10);
		return (7);
	}
	return (0);
}
