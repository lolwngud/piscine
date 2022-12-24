/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_increase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:13:02 by cahn              #+#    #+#             */
/*   Updated: 2022/10/09 21:36:19 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_overlap(int row, int col, int **puzzle)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < row)
	{
		if (puzzle[row][col] == puzzle[i][col])
			return (1);
		i++;
	}
	while (j < col)
	{
		if (puzzle[row][col] == puzzle[row][j])
			return (1);
		j++;
	}
	return (0);
}

int	count_increase_row(int row, int col, int **puzzle)
{
	int	cnt;
	int	i;
	int	max;

	cnt = 0;
	i = 0;
	max = puzzle[0][col];
	while (i <= row)
	{
		if (max < puzzle[i][col])
		{
			cnt++;
			max = puzzle[i][col];
		}
		i++;
	}
	return (cnt);
}

int	count_increase_col(int row, int col, int **puzzle)
{
	int	cnt;
	int	i;
	int	max;

	cnt = 0;
	i = 0;
	max = puzzle[row][0];
	while (i <= col)
	{
		if (max < puzzle[row][i])
		{
			cnt++;
			max = puzzle[row][i];
		}
		i++;
	}
	return (cnt);
}

int	count_increase_row_rev(int col, int **puzzle)
{
	int	cnt;
	int	max;
	int	i;

	cnt = 0;
	i = 3;
	max = puzzle[3][col];
	while (i >= 0)
	{
		if (max < puzzle[i][col])
		{
			cnt++;
			max = puzzle[i][col];
		}
		i--;
	}
	return (cnt);
}

int	count_increase_col_rev(int row, int **puzzle)
{
	int	cnt;
	int	max;
	int	i;

	cnt = 0;
	i = 3;
	max = puzzle[row][3];
	while (i >= 0)
	{
		if (max < puzzle[row][i])
		{
			cnt++;
			max = puzzle[row][i];
		}
		i--;
	}
	return (cnt);
}
