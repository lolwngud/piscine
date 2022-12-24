/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:57:33 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/01 19:01:27 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int width, char left, char center, char right)
{
	int	w;

	w = 1;
	while (w <= width)
	{
		if (w == 1)
			ft_putchar(left);
		else if (w == width)
			ft_putchar(right);
		else
			ft_putchar(center);
		w ++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l;

	l = 1;
	if (x >= 1 && y >= 1)
	{
		while (l <= y)
		{
			if (l == 1)
				line(x, '/', '*', '\\');
			else if (l == y)
				line(x, '\\', '*', '/');
			else
				line(x, '*', ' ', '*');
			l++;
		}
	}
}
