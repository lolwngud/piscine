/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:45:09 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/11 21:51:50 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_errorcheck(char *str)
{
	int	i;
	int	k;
	int	l;

	l = ft_strlen(str);
	i = 0;
	if (str[0] == 0 || l == 1)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == 43 || str[i] == 45 || str[i] <= 32 || str[i] > 126)
			return (0);
		k = i + 1;
		while (k < ft_strlen(str))
		{
			if (str[i] == str[k])
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

void	ft_base_convert(long long nbr, char *base, long long b_len)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
		ft_base_convert(nbr, base, b_len);
	}
	else if (nbr < b_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_base_convert(nbr / b_len, base, b_len);
		ft_base_convert(nbr % b_len, base, b_len);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b_len;
	int	error;

	b_len = ft_strlen(base);
	error = ft_errorcheck(base);
	if (error == 1)
		ft_base_convert((long long)nbr, base, (long long)b_len);
}
