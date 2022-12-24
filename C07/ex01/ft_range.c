/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:36:46 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/11 20:37:29 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_arr;
	int	range;
	int	i;

	range = max - min;
	int_arr = (int *)malloc(range * sizeof(int));
	if (min >= max)
		return (0);
	i = 0;
	while (i < range)
	{
		int_arr[i] = min + i;
		i++;
	}
	return (int_arr);
}
