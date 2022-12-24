/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:41:00 by cahn              #+#    #+#             */
/*   Updated: 2022/10/09 21:31:10 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	find_possible_1(int **row_col, int **puzzle);

int	**allocate(int size)
{
	int	**arr;
	int	i;

	arr = 0;
	arr = (int **)malloc(sizeof(int *) * (size));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		arr[i] = (int *)malloc(sizeof(int) * (size));
		if (arr[i] == 0)
			return (0);
		i++;
	}
	return (arr);
}

void	free_all(int **row_col, int **puzzle)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(row_col[i]);
		free(puzzle[i]);
		i++;
	}
	free(row_col);
	free(puzzle);
}

int	input_row_col(int **row_col_arr, int argc, char *argv[])
{
	int	i;
	int	input_index;
	int	index;
	int	flag;

	index = 0;
	input_index = 0;
	flag = 1;
	while (index < 4)
	{
		i = 0;
		while (i < 4)
		{
			row_col_arr[index][i] = argv[argc - 1][input_index] - '0';
			if (argv[argc - 1][input_index + 1] != ' ')
				return (1);
			input_index += 2;
			i++;
		}
		index++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	**row_col_arr;
	int	**puzzle;

	row_col_arr = allocate(5);
	puzzle = allocate(5);
	if (input_row_col(row_col_arr, argc, argv))
		find_possible_1(row_col_arr, puzzle);
	else
		write(1, "Error\n", 6);
	free_all(row_col_arr, puzzle);
	return (0);
}
