/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosesong <hosesong@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:05:53 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/02 21:21:09 by hosesong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char str[])
{
	int	res;
	int	i;
	int	p;

	res = 0;
	i = 0;
	p = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			p = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (p * res);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;

	if (ac == 3)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]);
		rush(x, y);
	}
	else
		rush(5, 5);
	return (0);
}
