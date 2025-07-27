/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:48:24 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/23 17:52:48 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	i = 1;
	res = 0;
	while (i < power)
	{
		if (res == 0)
			res = nb * nb;
		else
			res *= nb;
		i++;
	}
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(7, 0));
// }
