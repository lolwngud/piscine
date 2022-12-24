/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 21:02:19 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/02 21:48:44 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	swap;

	k = 0;
	while (k < size - 1)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i + 1] < tab[i])
			{
				swap = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swap;
			}
			i++;
		}
		k++;
	}
}
