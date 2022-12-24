/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:51:36 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/18 20:21:33 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (i < length - 1 && flag == 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			flag = 0;
		i++;
	}
	if (flag == 0)
	{
		flag = 1;
		i = 0;
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
	}
	return (1);
}
