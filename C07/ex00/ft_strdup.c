/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:58:59 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/13 13:50:23 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_src;
	int		i;
	int		l;

	i = 0;
	while (src[i] != 0)
		i++;
	l = i + 1;
	new_src = (char *)malloc(l * sizeof(char));
	if (!(new_src))
		return (0);
	i = 0;
	while (src[i] != 0)
	{
		new_src[i] = src[i];
		i++;
	}
	new_src[i] = 0;
	return (new_src);
}
