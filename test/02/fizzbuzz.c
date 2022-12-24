/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:17:18 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 14:31:25 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenb(int nb)
{
	if (nb > 9)
		write(1, &"0123456789"[nb / 10], 1);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main()
{
	int	i;

	i = 1;
	while(i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{	ft_writenb(i);
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
