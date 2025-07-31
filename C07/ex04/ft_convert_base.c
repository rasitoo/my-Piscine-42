/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:28:20 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/31 11:07:37 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		ft_length_base(char *base);
int		ft_num_length(char *str, char *base);
int		ft_decimal_base(char *str, char *base, int length, int pos);
int		ft_power(int num, int power);
void	ft_change_base(int nbr, char *base, char *buffer);
int		ft_strlen(char *str);
char	*ft_reverse_char(char *buff);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

void	ft_change_base(int nbr, char *base, char *buffer)
{
	int		i;
	int		neg;
	long	n;
	int		length;

	length = ft_length_base(base);
	i = 0;
	n = nbr;
	neg = 0;
	if (nbr < 0)
	{
		neg = 1;
		n *= -1;
	}
	while (n > 0)
	{
		buffer[i++] = base[(n % length)];
		n /= length;
	}
	if (neg)
		buffer[i] = '-';
}

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_reverse_char(char *buff)
{
	char	*buff2;
	int		length;
	int		i;

	length = ft_strlen(buff) - 1;
	i = 0;
	buff2 = malloc(4096);
	if (buff2 == NULL)
		return (NULL);
	while (length >= 0)
		buff2[length--] = buff[i++];
	free(buff);
	return (buff2);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		length;
	int		length2;
	char	*buff;
	int		nb;

	if (nbr[0] == '0' && ft_strlen(nbr) == 1)
		return ("0");
	length = ft_length_base(base_from);
	length2 = ft_length_base(base_to);
	if (length < 2 || length2 < 2)
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	buff = malloc(4096);
	if (buff == NULL)
		return (NULL);
	ft_change_base(nb, base_to, buff);
	return (ft_reverse_char(buff));
}

//Ejecutar con:
//com -o a.out ex04/ft_convert_base2.c ex04/ft_convert_base.c && ./a.out
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_convert_base("     -+2", "0123456789ABCDEF", "01"));
// 	// printf("%d", ft_atoi_base("  +--A930A5Z", "0123456789ABCDEF"));
// }
