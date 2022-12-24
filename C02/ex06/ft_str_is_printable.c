/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:48:21 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/03 21:35:01 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
			if (str[i] >= 32 && str[i] <= 126)
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
