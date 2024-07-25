/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:11:08 by falakus           #+#    #+#             */
/*   Updated: 2024/07/22 16:24:26 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;
	int	bound;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	bound = max - min;
	ptr = (int *)malloc(bound * sizeof(int));
	if (!ptr)
	{
		*range = NULL;
		return (-1);
	}
	while (i < bound)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (i);
}
