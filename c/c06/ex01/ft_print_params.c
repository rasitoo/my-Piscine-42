/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:50:07 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/24 12:53:36 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc,	char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i] != '\0')
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
