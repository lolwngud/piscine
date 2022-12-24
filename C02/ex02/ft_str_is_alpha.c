/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:00:00 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/09 14:56:57 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
			if (str[i] >= 'a' && str[i] <= 'z')
				i++;
			else if (str[i] >= 'A' && str[i] <= 'Z')
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
