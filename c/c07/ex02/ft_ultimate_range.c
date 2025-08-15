/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 12:41:22 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/25 13:07:04 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	size_t	l;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	l = (size_t)(max - min) + 1;
	*range = (int *)malloc(l * 4);
	if (!range)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		range[0][i++] = min++;
	range[0][i] = '\0';
	return (l);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	*arr;

// 	printf("%d", ft_ultimate_range(&arr, 11, 20));
// 	while (*arr != '\0')
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }
