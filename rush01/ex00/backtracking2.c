/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:59:24 by cahn              #+#    #+#             */
/*   Updated: 2022/10/09 21:39:14 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_increase_row_rev(int col, int **puzzle);
int	count_increase_col_rev(int row, int **puzzle);

int	back_tracking2(int **row_col, int **puzzle, int row, int col)
{
	while (row < 4)
	{
		if (row_col[3][row] == 4 && puzzle[row][3] != 1)
			return (0);
		if (row_col[3][row] == 1 && puzzle[row][3] != 4)
			return (0);
		if (count_increase_col_rev(row, puzzle) != row_col[3][row] - 1)
			return (0);
		row++;
	}
	while (col < 4)
	{
		if (row_col[1][col] == 4 && puzzle[3][col] != 1)
			return (0);
		if (row_col[1][col] == 1 && puzzle[3][col] != 4)
			return (0);
		if (count_increase_row_rev(col, puzzle) != row_col[1][col] - 1)
			return (0);
		col++;
	}
	return (1);
}
