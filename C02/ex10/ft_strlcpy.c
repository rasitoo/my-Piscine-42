/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 17:31:48 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/17 13:37:08 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		while (j < size)
		{
			dest[j] = src[j];
			j++;
		}
		i++;
	}
	dest[size - 1] = '\0';
	return (i);
}
