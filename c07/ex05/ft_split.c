/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 02:49:32 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/31 12:00:30 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_it_charset(char *charset, char c);
int		word_count(char *str, char *charset);
char	*put_word(char *str, char *charset);

char	**ft_split(char *str, char *charset)
{	
	int		size;
	char	**p;
	int		i;
	int		p_idx;

	size = word_count(str, charset);
	p = (char **)malloc(sizeof(char *) * (size + 1));
	if (!p)
		return (0);
	i = 0;
	p_idx = 0;
	while (str[i])
	{
		while (str[i] && is_it_charset(charset, str[i]))
			i++;
		if (str[i])
		{	
			p[p_idx++] = put_word(str + i, charset);
			i++;
		}
		while (str[i] && !(is_it_charset(charset, str[i])))
			i++;
	}
	p[p_idx] = 0;
	return (p);
}

char	*put_word(char *str, char *charset)
{
	int		len_word;
	int		idx;
	char	*word;

	len_word = 0;
	idx = 0;
	while (str[len_word] && !(is_it_charset(charset, str[len_word])))
		len_word++;
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (idx < len_word)
	{	
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = 0;
	return (word);
}

int	is_it_charset(char *charset, char c)
{	
	int	i;

	i = 0;
	while (charset[i])
	{	
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{	
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{	
		while (str[i] && is_it_charset(charset, str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !(is_it_charset(charset, str[i])))
			i++;
	}
	return (count);
}
