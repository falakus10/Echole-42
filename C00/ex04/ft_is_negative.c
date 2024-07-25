/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:02:28 by falakus           #+#    #+#             */
/*   Updated: 2024/07/08 14:07:10 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
