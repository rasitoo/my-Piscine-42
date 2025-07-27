/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:28:20 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/27 16:15:03 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_length_base(char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	length;
	int	length2;
	int	nb;

	length = ft_length_base(base_from);
	length2 = ft_length_base(base_to);
	if (length < 2 || length2 < 2)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	
}

// int	ft_power(int num, int power)
// {
// 	int	i;
// 	int	res;

// 	if (power == 0)
// 		return (1);
// 	if (power == 1)
// 		return (num);
// 	i = 1;
// 	res = 0;
// 	while (i < power)
// 	{
// 		if (res == 0)
// 			res = num * num;
// 		else
// 			res *= num;
// 		i++;
// 	}
// 	return (res);
// }

// int	ft_decimal_base(char *str, char *base, int length, int pos)
// {
// 	int	i;
// 	int	j;
// 	int	res;

// 	j = 0;
// 	res = 0;
// 	while (str[j] != '\0')
// 	{
// 		i = 0;
// 		while (base[i])
// 		{
// 			if (base[i] == str[j])
// 				res += i * ft_power(length, pos--);
// 			i++;
// 		}
// 		j++;
// 	}
// 	return (res);
// }

// int	ft_num_length_base(char *str, int base_length)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }


//Ejecutar con:
//com -o a.out ex04/ft_convert_base2.c ex04/ft_convert_base.c && ./a.out
int	main(void)
{
	//printf("%d", ft_length_base("A"));
	printf("%d", ft_atoi_base("  +--A930A5Z", "0123456789ABCDEF"));
}
