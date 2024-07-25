/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:38:38 by falakus           #+#    #+#             */
/*   Updated: 2024/07/17 19:34:05 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	counter;

	counter = 2;
	if (nb <= 1)
		return (0);
	while (counter <= (nb / 2))
	{
		if (nb % counter == 0)
			return (0);
		counter++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (ft_is_prime(nb + i) == 0)
	{
		i++;
	}
	return (nb + i);
}
