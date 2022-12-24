/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:57:52 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/17 22:26:35 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_errorcheck(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == 0 || str[1] == 0)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
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

int	whitespace(char *str, int *index)
{
	int	sign;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != 0)
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nb;
	int	nb2;
	int	base_len;

	nb = 0;
	base_len = ft_errorcheck(base);
	i = 0;
	if (base_len >= 2)
	{
		sign = whitespace(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * base_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= sign);
	}
	return (0);
}
