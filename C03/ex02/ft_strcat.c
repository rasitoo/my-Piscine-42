/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:52:57 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/21 13:25:41 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
