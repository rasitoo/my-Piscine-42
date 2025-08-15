/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:35:45 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/25 10:42:40 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char		*dup;
	int			i;
	size_t		l;

	i = 0;
	l = (size_t) ft_strlen(src);
	dup = malloc(l + 1);
	if (!dup)
		return (NULL);
	while (*src != '\0')
	{
		dup[i++] = *src;
		src++;
	}
	dup[i] = '\0';
	return (dup);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;

// 	str = ft_strdup("Hola que tal");
// 	printf("%s", str);
// }
