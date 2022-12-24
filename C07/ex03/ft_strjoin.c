/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:32:49 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/19 20:55:24 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	total_len(char **strs, int size, int sep_length)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + sep_length;
		i++;
	}
	len = len - sep_length;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (dest[i] != 0)
		i++;
	k = 0;
	while (src[k] != 0)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		length;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	length = total_len(strs, size, ft_strlen(sep));
	a = (char *)malloc((length + 1) * sizeof(char));
	if (a == 0)
		return (0);
	i = 0;
	a[0] = 0;
	while (i < size)
	{
		ft_strcat(a, strs[i]);
		if (i < size - 1)
			ft_strcat(a, sep);
		i++;
	}
	return (a);
}
