/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:47:39 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/17 21:32:27 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	range2;
	int	i;
	int	*a;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	range2 = max - min;
	a = (int *)malloc(range2 * sizeof(int));
	if (a == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	*range = a;
	while (i < range2)
	{
		a[i] = min + i;
		i++;
	}
	return (range2);
}
