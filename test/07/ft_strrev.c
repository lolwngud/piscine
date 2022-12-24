/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:09:30 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/20 21:33:17 by juhypark         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		i;
	int		size;
	char	temp;

	i = 0;
	size = ft_strlen(str);
	while(i < size / 2)
	{
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
	return (str);
}
#include<stdio.h>
int	main()
{
	char str[] = "hello";
	printf("%s\n", ft_strrev(str));
	return (0);
}
