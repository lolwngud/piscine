/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:17:38 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/05 19:00:18 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	while (dest[i] != 0)
		i++;
	k = 0;
	while (k < nb && src[k] != 0)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = 0;
	return (dest);
}
