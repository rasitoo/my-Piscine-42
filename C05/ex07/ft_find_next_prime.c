/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 12:03:03 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/24 12:34:43 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	res;
	int	primo;

	if (nb <= 1)
		return (2);
	primo = 0;
	while (!primo)
	{
		primo = 1;
		res = 2;
		while ((res * res) <= nb)
		{
			if ((nb % res) == 0)
			{
				primo = 0;
				break ;
			}
			res++;
		}
		if (primo)
			return (nb);
		nb++;
	}
	return (nb - 1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_find_next_prime(74));
// }
