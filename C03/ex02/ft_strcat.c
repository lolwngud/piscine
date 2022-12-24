/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:53:29 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/05 18:58:33 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
