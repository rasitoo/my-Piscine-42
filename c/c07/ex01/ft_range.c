/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:41:28 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/25 12:40:15 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*arr;
	int		i;
	size_t	l;

	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	i = 0;
	l = (size_t)(max - min) + 1;
	arr = malloc(l * 4);
	while (min < max)
		arr[i++] = min++;
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;

// 	arr = ft_range(11, 20);
// 	while (*arr != '\0')
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }
