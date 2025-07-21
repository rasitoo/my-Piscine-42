/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:16:47 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/17 11:09:29 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	n;
	char			*address;

	n = 0;
	address = (char *) &addr;
	while (n < size)
	{
		write (1, ((char *) &addr) + 48, (2 * sizeof (void *) + 1));
		n++;
	}
	return (addr);
}
