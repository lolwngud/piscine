/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:54:09 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/16 20:45:04 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char arr[], int length)
{
	write(1, arr, length);
	if (arr[0] < '0' + (10 - length))
		write(1, ", ", 2);
}

void	fill_arr(int depth, char arr[], int length)
{
	char	num;

	if (depth == length)
	{
		ft_print(arr, length);
		return ;
	}
	if (depth == 0)
	{
		num = '0';
	}
	else
	{
		num = arr[depth - 1] + 1;
	}
	while (num <= '9')
	{
		arr[depth] = num;
		fill_arr(depth + 1, arr, length);
		num++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	fill_arr(0, arr, n);
}
