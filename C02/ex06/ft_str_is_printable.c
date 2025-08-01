/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 13:16:44 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/15 13:34:09 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] <= 31 || str[n] == 127)
			return (0);
		n++;
	}
	return (1);
}
