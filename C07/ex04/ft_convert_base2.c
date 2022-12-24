/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:44:32 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 18:28:56 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	length_nbr(int nbr, char *base, int length)
{
	int				base_length;
	unsigned int	nb;

	base_length = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		length++;
	}
	else
		nb = nbr;
	while (nb / (unsigned int)base_length != 0)
	{
		nb = nb / base_length;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf)
{
	long long	nb;
	int			length_base;
	int			i;
	int			len_nbrf;

	length_base = ft_strlen(base);
	len_nbrf = length_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= length_base)
	{
		nbrf[len_nbrf] = base[nb % length_base];
		nb /= length_base;
		len_nbrf--;
	}
	if (nb < length_base)
		nbrf[i] = base[nb];
}
