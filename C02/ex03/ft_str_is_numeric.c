/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 12:51:39 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/15 12:54:53 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!(str[n] >= 48 && str[n] <= 57))
			return (0);
		n++;
	}
	return (1);
}
