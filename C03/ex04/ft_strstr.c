/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:04:48 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/10 20:49:41 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_length(char *st)
{
	int	i;

	i = 0;
	while (st[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	int		l;

	i = 0;
	l = ft_length(to_find);
	if (l == 0)
		return (str);
	while (str[i] != 0)
	{
		k = 0;
		while (to_find[k] != 0)
		{
			if (str[i + k] == to_find[k])
				k++;
			else
				break ;
		}
		if (k == l)
			return (&str[i]);
		i++;
	}
	return (0);
}
