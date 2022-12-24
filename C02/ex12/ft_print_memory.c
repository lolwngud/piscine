/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:56:35 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/18 12:29:49 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_addr(long long addr, unsigned int size)
{
	char 	arr[16];
	int		i;
	
	i = 0;
	while (i < 16)
	{
		arr[i] = '0';
		i++;
	}
	i--;
	while (i >= 0)
	{
		arr[i] = "0123456789abcdef"[addr % 16];
		addr = addr / 16;
		i--;
	}
	while (arr[++i] != 0)
		write(1, arr[i], 1);
}

void	print_hex()
{

}

void	print_char()
{

}

void	*ft_print_memory(void *addr, unsigned int size)
{

}
