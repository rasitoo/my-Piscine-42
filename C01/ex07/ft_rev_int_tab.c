/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:37:13 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/14 18:46:14 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;

	n = 0;
	while (n < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = temp;
		n++;
	}
}
