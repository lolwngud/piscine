/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:07:52 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 20:57:12 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	plus(int a, int b);
int	minus(int a, int b);
int	mul(int a, int b);
int	div(int a, int b);
int	mod(int a, int b);

int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	p;

	res = 0;
	i = 0;
	p = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			p *= 1;
		else if (str[i] == '-')
			p *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (p * res);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
		ft_putnbr(nb);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_doop(char *a, char *o, char *b)
{
	int	res;
	int	(*arr[5])(int, int);

	arr[0] = &plus;
	arr[1] = &minus;
	arr[2] = &mul;
	arr[3] = &div;
	arr[4] = &mod;
	res = 0;
	if (o[0] == '+')
		res = arr[0](ft_atoi(a), ft_atoi(b));
	else if (o[0] == '-')
		res = arr[1](ft_atoi(a), ft_atoi(b));
	else if (o[0] == '*')
		res = arr[2](ft_atoi(a), ft_atoi(b));
	else if (o[0] == '/')
		res = arr[3](ft_atoi(a), ft_atoi(b));
	else if (o[0] == '%')
		res = arr[4](ft_atoi(a), ft_atoi(b));
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
			write (1, "Stop : division by zero\n", 24);
		else if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
			write (1, "Stop : modulo by zero\n", 22);
		else
			ft_doop(av[1], av[2], av[3]);
	}
	return (0);
}
