/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 11:48:38 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/23 11:45:41 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length_base(char *base)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 0;
	j = 0;
	while (base[length] != '\0')
	{
		length++;
		if (base[length] == '-' && base[length] == '+')
			return (0);
	}
	if (length < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i;
		while (base[j++])
			if (base[i] == base[j])
				return (0);
		i++;
	}
	return (length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[12];
	int		i;
	long	n;
	int		length;

	length = ft_length_base(base);
	if (length < 2)
		return ;
	i = 0;
	n = nbr;
	if (n == 0)
		write(1, &base[0], 1);
	if (nbr < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	while (n > 0)
	{
		buffer[i++] = base[(n % length)];
		n /= length;
	}
	while (--i >= 0)
		write(1, &buffer[i], 1);
}

// int	main(void)
// {
// 	ft_putnbr_base(2147483647, "0123456789");
// }
