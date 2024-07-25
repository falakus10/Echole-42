/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:09:24 by falakus           #+#    #+#             */
/*   Updated: 2024/07/21 18:23:24 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
		return (0);
	str = (int *)malloc((max - min) * sizeof(int));
	if (!str)
		return (NULL);
	i = 0;
	while (max > min)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
