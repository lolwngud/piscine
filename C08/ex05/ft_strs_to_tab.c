/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:31:26 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/13 16:08:58 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

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

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*a;
	int					i;

	a = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!a)
		return (0);
	i = 0;
	while (i < ac)
	{
		a[i].size = ft_strlen(av[i]);
		a[i].str = av[i];
		a[i].copy = ft_strdup(av[i]);
		i++;
	}
	a[i].str = 0;
	a[i].copy = 0;
	return (a);
}
