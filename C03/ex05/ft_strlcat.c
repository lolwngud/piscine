/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:27 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/15 15:12:54 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != 0)
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = ft_length(dest);
	s_len = ft_length(src);
	if (size <= d_len)
		return (s_len + size);
	i = 0;
	while (dest[i] != 0)
		i++;
	k = 0;
	while (src[k] != 0 && k < size - d_len - 1)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = 0;
	return (d_len + s_len);
}
