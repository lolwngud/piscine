/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:54:49 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/12 16:35:27 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac >= 3)
	{
		i = 1;
		while (i < ac - 1)
		{
			j = 1;
			while (j < ac - 1)
			{
				if (ft_strcmp(av[j], av[j + 1]) > 0)
					ft_swap(&av[j], &av[j + 1]);
				j++;
			}
			i++;
		}
	}
	i = 1;
	while (av[i] != 0)
	{
		ft_putstr(av[i++]);
		write(1, "\n", 1);
	}
	return (0);
}
