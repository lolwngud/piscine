/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cahn <cahn@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:54:14 by cahn              #+#    #+#             */
/*   Updated: 2022/10/09 21:21:34 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_overlap(int row, int col, int **puzzle);
int	count_increase_row(int row, int col, int **puzzle);
int	count_increase_col(int row, int col, int **puzzle);

int	back_tracking1(int row, int col, int **row_col, int **puzzle)
{
	if (is_overlap(row, col, puzzle))
		return (0);
	if (row == 0 && row_col[0][col] == 4 && puzzle[row][col] != 1)
		return (0);
	if (row == 0 && row_col[0][col] == 1 && puzzle[row][col] != 4)
		return (0);
	if (col == 0 && row_col[2][row] == 4 && puzzle[row][col] != 1)
		return (0);
	if (col == 0 && row_col[2][row] == 1 && puzzle[row][col] != 4)
		return (0);
	if (count_increase_row(row, col, puzzle) > row_col[0][col] - 1)
		return (0);
	if (count_increase_col(row, col, puzzle) > row_col[2][row] - 1)
		return (0);
	if (row == 3 && count_increase_row(row, col, puzzle) != row_col[0][col] - 1)
		return (0);
	if (col == 3 && count_increase_col(row, col, puzzle) != row_col[2][row] - 1)
		return (0);
	return (1);
}
