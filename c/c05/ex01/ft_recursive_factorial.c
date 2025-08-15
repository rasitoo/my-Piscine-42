/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:13:00 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/23 17:45:57 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return ((nb) * (ft_recursive_factorial((nb - 1))));
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_recursive_factorial(1));
// }
