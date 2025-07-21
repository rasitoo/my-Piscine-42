/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 21:20:30 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/20 21:20:30 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		length;
	int		i;
	int		temp;
	char	c;

	length = 0;
	i = 1;
	temp = nb;
	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	while (length)
	{
		temp = 1;
		while (i < length)
		{
				temp *= 10;
				i++;
		}
		c = (nb % temp) + 50;
		write(1, &c, 1);
		length--;
	}
}

int	main(void)
{
	ft_putnbr(42);
}