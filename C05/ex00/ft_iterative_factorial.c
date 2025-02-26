/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:36:15 by falakus           #+#    #+#             */
/*   Updated: 2024/07/17 18:36:16 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	factorial = 1;
	while (nb > 0)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
