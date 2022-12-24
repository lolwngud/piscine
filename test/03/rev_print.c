/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:35:55 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 17:54:13 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	i--;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev_print(av[1]);
	return (0);
}
