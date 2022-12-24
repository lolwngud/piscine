/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 21:16:21 by juhypark          #+#    #+#             */
/*   Updated: 2022/11/09 15:43:18 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (src[l] != 0)
		l++;
	while (src[i] != 0 && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (l);
}
