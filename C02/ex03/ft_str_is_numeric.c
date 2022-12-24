/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:39:43 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/03 17:40:46 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	if (str[i] == 0)
		return (k);
	else
	{
		while (str[i] != 0)
		{
			if (str[i] >= '0' && str[i] <= '9')
				i++;
			else
			{
				k = 0;
				break ;
			}
		}
		return (k);
	}
}
