/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:00:30 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/24 18:28:12 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int argc,	char *argv[])
{
	int	i;
	int	j;

	if (argc <= 1)
		return (1);
	i = 0;
	j = 0;
	while (++i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
	}
	i = 0;
	while (++i < argc)
	{
		while (*argv[i] != '\0')
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
	}
	return (0);
}
