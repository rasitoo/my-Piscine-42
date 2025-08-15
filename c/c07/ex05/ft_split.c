/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 11:07:59 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/31 20:31:17 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_char_in_str(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

int	ft_count_words(char *str, char *sep)
{
	int	word;
	int	count;

	count = 0;
	word = 0;
	while (*str != '\0')
	{
		if (!ft_char_in_str(sep, *str) && !word)
		{
			word = 1;
			count++;
		}
		else
			if (ft_char_in_str(sep, *str))
				word = 0;
		str++;
	}
	return (count);
}

char	*ft_get_x_word_pointer(char *str, char *sep, int x)
{
	int		word;
	int		count;

	count = 0;
	word = 0;
	while (*str != '\0')
	{
		if (!ft_char_in_str(sep, *str) && !word)
		{
			word = 1;
			count++;
			if (count == x)
				return (str);
		}
		else
			if (ft_char_in_str(sep, *str))
				word = 0;
		str++;
	}
	return (NULL);
}

int	ft_get_x_word_length(char *word_start, char *sep)
{
	int		found_length;

	found_length = 0;
	if (!word_start)
		return (0);
	while (*word_start && !ft_char_in_str(sep, *word_start))
	{
		found_length++;
		word_start++;
	}
	return (found_length);
}


char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		w_length;
	int		words;
	char	**strs;
	char	*str2;

	words = ft_count_words(str, charset);
	i = 0;
	strs = malloc(sizeof(char *) * words);
	while (++i <= words)
	{
		str2 = ft_get_x_word_pointer(str, charset, i);
		w_length = ft_get_x_word_length(str2, charset);
		strs[i - 1] = malloc(w_length);
		j = 0;
		while (j < w_length)
		{
			strs[i - 1][j] = str2[j];
			j++;
		}
	}
	return (strs);
}

#include <stdio.h>

int	main(void)
{
	char	**strs;

	// printf("%d\n", ft_count_words("Hola  que tal  ", "a"));
	// printf("%s\n", ft_get_x_word_pointer("hola que tal estas  ", " ", 1));
	// printf("%d\n", ft_get_x_word_length(ft_get_x_word_pointer("hola que tal estas  ", " ", 1), " "));
	// printf("%d\n", ft_get_x_word_length("h h h h", ""));
	strs = ft_split("holaaa que tal estas  ", " ");
	while (*strs)
	{
		printf("%s\n", *strs);
		strs++;
	}
}
