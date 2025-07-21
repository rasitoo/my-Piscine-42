/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:25:27 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/17 13:43:00 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;
	char	c;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		if (ft_str_is_printable(*str))
			write(1, str, 1);
		else
		{
			c = *str;
			write(1, "\\", 1);
			write(1, &hex[c / 16], 1);
			write(1, &hex[c % 16], 1);
		}
		str ++;
	}
}
