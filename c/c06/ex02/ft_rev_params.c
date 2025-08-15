/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:56:17 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/24 12:58:22 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc,	char *argv[])
{
	while (argc-- > 1)
	{
		while (*argv[argc] != '\0')
			write(1, argv[argc]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
