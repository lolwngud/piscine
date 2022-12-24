/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:07:19 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/01 15:54:37 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'a' ;
	while (alpha <= 'z')
	{
		write (1, &alpha, 1);
		alpha++;
	}
}
