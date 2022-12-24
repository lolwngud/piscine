/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:42:23 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/08 14:14:21 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = a / 10 + 48;
			ft_putchar(c);
			c = a % 10 + 48;
			ft_putchar(c);
			write(1, &" ", 1);
			c = b / 10 + 48;
			ft_putchar(c);
			c = b % 10 + 48;
			ft_putchar(c);
			if (a < 98)
				write(1, &", ", 2);
			b = b + 1;
		}
		a = a + 1;
	}
}
