/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:05:30 by falakus           #+#    #+#             */
/*   Updated: 2024/07/10 18:05:35 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	digit;

	i = 0;
	while (i < (size / 2))
	{
		digit = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = digit;
		i++;
	}
}
