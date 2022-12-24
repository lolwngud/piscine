/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhypark <juhypark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:29:39 by juhypark          #+#    #+#             */
/*   Updated: 2022/10/15 13:29:45 by juhypark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != 0)
			count++;
		while (str[i] != 0 && check_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != 0 && check_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int		len_word;
	int		i;
	char	*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	j = 0;
	while (str[j] != 0)
	{
		while (str[j] != 0 && check_sep(str[j], charset) == 1)
			j++;
		if (str[j] != 0)
		{
			strings[i] = ft_word(&str[j], charset);
			i++;
		}
		while (str[j] != 0 && check_sep(str[j], charset) == 0)
			j++;
	}
	strings[i] = 0;
	return (strings);
}
