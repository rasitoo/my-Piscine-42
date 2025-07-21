/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 10:39:50 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/21 10:39:50 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int		nb_lgth;
	// int		dec_pos;
	// int		i;
	int		res;
	// char	c;

	nb_lgth = 0;
	res = 0;
	while (str[nb_lgth] != '\0' && str[nb_lgth] > '0' && str[nb_lgth] > '9')
		nb_lgth++;
	while (nb_lgth)
	{
		res += (str[nb_lgth--]);
	}
	return (res);
}

int	main(void)
{
	printf("%d",ft_atoi("214324"));
}
