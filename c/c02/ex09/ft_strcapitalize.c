/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 16:32:54 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/17 13:45:35 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char str)
{
	if (!(str >= 97 && str <= 122))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char str)
{
	if (!(str >= 48 && str <= 57))
		return (0);
	return (1);
}

int	ft_str_is_alpha(char str)
{
	if (!((str >= 'a' && str <= 'z')
			|| (str >= 'A' && str <= 'Z')))
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char str)
{
	if (!(str >= 65 && str <= 90))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (ft_str_is_uppercase(str[n]))
			str[n] = str[n] + 32;
		n++;
	}
	n = 0;
	while (str[n] != '\0')
	{
		if (!ft_str_is_numeric(str[n - 1]) && !ft_str_is_alpha(str[n - 1]))
			if (ft_str_is_lowercase(str[n]))
				str[n] = str[n] - 32;
		n++;
	}
	return (str);
}
