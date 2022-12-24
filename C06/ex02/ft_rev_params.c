/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:45:32 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/08 11:54:13 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac >= 2)
	{
		while (av[i] != 0)
			i++;
		i--;
		while (i > 0)
		{
			j = 0;
			while (av[i][j] != 0)
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
