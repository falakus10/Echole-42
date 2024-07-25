/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:15:40 by falakus           #+#    #+#             */
/*   Updated: 2024/07/08 15:31:17 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, char first, char middle, char final)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(first);
		else if (i == x)
			ft_putchar(final);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (1 <= x && 1 <= y)
	{
		while (j <= y)
		{
			if (j == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (j == y)
				ft_print(x, 'C', 'B', 'A');
			else
				ft_print(x, 'B', '  ', 'B');
			j++;
		}
	}
	else
		write(1, "input can not be minus or zero", 30);
}
