/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:29:16 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/20 18:29:16 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	tofill;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	tofill = size - dlen - 1;
	if (dlen >= size)
		return (size + slen);
	while (src[i] != '\0' && tofill--)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

// int	main(void)
// {
// 	char	str[3] = "est";
// 	char	str2[] =  "estasrewgsdgfgfdgdfsdfgdgfhfgfgdg";
// 	printf("%u\n", ft_strlcat(str, str2, sizeof(str)));
// 	// printf("%zu\n", strlcat(str, str2, sizeof(str)));
// 	printf("%s\n", str);
// }
