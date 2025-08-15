/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:09:52 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/23 17:41:07 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	i = 1;
	while (i <= nb)
		res *= i++;
	return (res);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(-6));
// }
