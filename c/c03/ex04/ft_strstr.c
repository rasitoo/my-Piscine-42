/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:53:21 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/18 12:53:27 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	checksubstr(char *to_find, char *str, int	*i)
{
	int	j;

	j = 0;
	while (to_find[*i] != '\0')
	{
		if (to_find[*i] - str[j])
		{
			*i = 0;
			break ;
		}
		else
		{
			*i = *i + 1;
			j++;
		}
	}
	if (to_find[*i] == '\0')
		return (1);
	else
	{
		*i = 0;
		return (0);
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (*str != '\0')
	{
		if (!(to_find[i] - *str))
			if (checksubstr(to_find, str, &i))
				return (str);
		str++;
	}
	return (NULL);
}
