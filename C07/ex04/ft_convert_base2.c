/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:28:35 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/27 15:16:28 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[length] == '-' || base[length] == '+')
			return (0);
	}
	if (length < 2)
		return (0);
	while (base[i] != '\0')
	{
		j = i;
		while (base[j++] != '\0')
			if (base[i] == base[j])
				return (0);
		i++;
	}
	return (length);
}

int	ft_power(int num, int power)
{
	int	i;
	int	res;

	if (power == 0)
		return (1);
	if (power == 1)
		return (num);
	i = 1;
	res = 0;
	while (i < power)
	{
		if (res == 0)
			res = num * num;
		else
			res *= num;
		i++;
	}
	return (res);
}

int	ft_decimal_base(char *str, char *base, int length, int pos)
{
	int	i;
	int	j;
	int	res;

	j = 0;
	res = 0;
	while (str[j] != '\0')
	{
		i = 0;
		while (base[i])
		{
			if (base[i] == str[j])
				res += i * ft_power(length, pos--);
			i++;
		}
		j++;
	}
	return (res);
}

int	ft_num_length(char *str, char *base)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		found = 0;
		while (base[j] != '\0')
		{
			if (str[i] == base[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	length;
	int	i;
	int	pos;

	length = ft_length_base(base);
	if (length < 2)
		return (0);
	neg = 1;
	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			neg = -neg;
	pos = ft_num_length(&str[i], base) - 1;
	return (ft_decimal_base(str, base, length, pos) * neg);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi_base("  +--A930A5Z", "0123456789ABCDEF"));
// 	// ft_atoi_base("2A", "0123456789ABCDEF");
// 	// printf("%d", ft_atoi_base("F", "0123456789ABCDEF"));
// 	// printf("%d", ft_atoi_base("D", "0123456789ABCDEF"));
// }
