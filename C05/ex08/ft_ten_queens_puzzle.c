/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:35:09 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/18 15:56:30 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	abs(int a)
{
	if (a < 0)
		a = -a;
	return (a);
}

int	check(int *board, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[col] == board[i] || abs(board[col] - board[i]) == col - i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	tenqueen(int *board, int col, int *a)
{
	int	i;
	int	j;
	int	c;

	if (col == 10)
	{
		*a += 1;
		i = 0;
		while (i < 10)
		{
			c = board[i] + 48;
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		return ;
	}
	j = 0;
	while (j < 10)
	{
		board[col] = j;
		if (check(board, col) == 1)
			tenqueen(board, col + 1, a);
		j++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	*a;
	int	count;
	int	board[10];

	count = 0;
	a = &count;
	tenqueen(board, 0, a);
	return (count);
}
