/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:43:58 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 11:32:56 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf);
int		length_nbr(int nbr, char *base, int length);
int		ft_strlen(char *str);

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == 0 || str[1] == 0)
		return (0);
	while (str[i] != 0)
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != 0)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char c, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != 0)
	{
		if (c == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != 0) && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	nb;
	int	nb2;
	int	base_length;

	nb = 0;
	i = 0;
	base_length = checkerror(base);
	if (base_length >= 2)
	{
		count = whitespaces(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_length) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= count);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*final_nbr;
	int		med_nbr;
	int		length_nbrf;

	if (checkerror(base_to) == 0 || checkerror(base_from) == 0)
		return (0);
	med_nbr = ft_atoi_base(nbr, base_from);
	length_nbrf = length_nbr(med_nbr, base_to, 0);
	final_nbr = (char *)malloc(sizeof(char) * (length_nbrf + 1));
	if (final_nbr == 0)
		return (0);
	ft_putnbr_base_v2(med_nbr, base_to, final_nbr);
	final_nbr[length_nbrf] = '\0';
	return (final_nbr);
}
