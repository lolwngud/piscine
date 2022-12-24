/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:51:02 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/06 14:52:57 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		res = 0;
	else if (power > 0)
		res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
