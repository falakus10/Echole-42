/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:37:00 by falakus           #+#    #+#             */
/*   Updated: 2024/07/17 18:37:21 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;

	counter = 1;
	while (counter * counter <= nb)
	{
		if (counter * counter == nb)
			return (counter);
		counter++;
	}
	return (0);
}
