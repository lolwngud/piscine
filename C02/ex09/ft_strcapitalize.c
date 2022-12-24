/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:10:04 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/04 17:33:22 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	k;

	i = 0;
	ft_strlowcase(str);
	if (str[i] != 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;
	i++;
	while (str[i] != 0)
	{
		k = i - 1;
		if ((str[k] < 48 || str[k] > 122) || (str[k] > 57 && str[k] < 65))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else if (str[k] > 90 && str[k] < 97)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
