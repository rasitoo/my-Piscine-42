/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:56:50 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/27 13:27:28 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_fill(int size, char **strs, char *sep, char *str)
{
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			str[k++] = sep[j++];
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		lgth;

	if (size <= 0)
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	i = -1;
	lgth = 0;
	while (++i < size)
		lgth += ft_strlen(strs[i]);
	lgth += (ft_strlen(sep) * size) + 1;
	str = (char *)malloc(lgth);
	return (ft_fill(size, strs, sep, str));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strs[4];

// 	strs[0] = "Hola";
// 	strs[1] = "que";
// 	strs[2] = "tal";
// 	strs[3] = "estas";
// 	printf("%s", ft_strjoin(4, strs, "patata"));
// }
