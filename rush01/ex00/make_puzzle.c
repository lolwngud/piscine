/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_puzzle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:40:42 by cahn              #+#    #+#             */
/*   Updated: 2022/10/09 21:56:22 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	back_tracking1(int row, int col, int **row_col, int **puzzle);
int	back_tracking2(int **row_col, int **puzzle, int row, int col);
int	make_puzzle(int row, int col, int **row_col, int **puzzle);

void	print_answer_puzzle(int **puzzle)
{
	int			row;
	int			col;
	char		ch;
	static int	flag;

	row = 0;
	if (flag == 0)
	{
		while (row < 4)
		{
			col = 0;
			while (col < 4)
			{
				ch = puzzle[row][col] + '0';
				write(1, &ch, 1);
				if (col < 3)
					write(1, " ", 1);
				col++;
			}
			write(1, "\n", 1);
			row++;
		}
		flag++;
	}
}

int	dfs(int row, int col, int **row_col, int **puzzle)
{
	int	i;
	int	sum;

	sum = 0;
	if (row == 3 && col == 3)
		sum += make_puzzle(row + 1, 0, row_col, puzzle);
	else
	{
		i = 1;
		while (i <= 4)
		{
			if (col == 3)
			{
				puzzle[row + 1][0] = i;
				sum += make_puzzle(row + 1, 0, row_col, puzzle);
			}
			else
			{
				puzzle[row][col + 1] = i;
				sum += make_puzzle(row, col + 1, row_col, puzzle);
			}
			i++;
		}
	}
	return (sum);
}

int	make_puzzle(int row, int col, int **row_col, int **puzzle)
{
	if (row == 4)
	{
		if (back_tracking2(row_col, puzzle, 0, 0))
		{
			print_answer_puzzle(puzzle);
			return (1);
		}
		return (0);
	}
	if (!back_tracking1(row, col, row_col, puzzle))
		return (0);
	return (dfs(row, col, row_col, puzzle));
}

void	find_possible_1(int **row_col, int **puzzle)
{
	int	sum;
	int	i;

	sum = 0;
	i = 1;
	while (i <= 4)
	{
		puzzle[0][0] = i;
		sum += make_puzzle(0, 0, row_col, puzzle);
		i++;
	}
	if (sum == 0)
		write(1, "Error\n", 6);
}
