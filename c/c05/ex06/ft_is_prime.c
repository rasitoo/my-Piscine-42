/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:51:31 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/24 12:02:36 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	res;

	if (nb <= 1)
		return (0);
	res = 2;
	while ((res * res) <= nb)
	{
		if ((nb % res) == 0)
			return (0);
		res++;
	}
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_is_prime(-2));
// }
