/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:39:49 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/23 18:50:46 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 0;
	while ((res * res) <= nb)
	{
		if ((res * res) == nb)
			return (res);
		res++;
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(144));
// }