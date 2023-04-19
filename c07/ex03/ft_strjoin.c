/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 17:08:18 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/31 20:08:56 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strs_len(char **strs, int size);
void	put_in_malloc(int size, char *p, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	int		strs_len;
	int		sep_len;
	char	*p;

	if (size == 0)
	{	
		p = (char *)malloc(sizeof(char) * 1);
		p[0] = 0;
		return (p);
	}
	strs_len = ft_strs_len(strs, size);
	sep_len = 0;
	while (sep[sep_len])
		sep_len++;
	p = (char *)malloc(sizeof(char) * (strs_len + sep_len * (size - 1) + 1));
	if (!p)
		return (0);
	put_in_malloc(size, p, strs, sep);
	return (p);
}

void	put_in_malloc(int size, char *p, char **strs, char *sep)
{	
	int	i;
	int	j;
	int	idx;
	int	k;

	idx = 0;
	i = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j])
			p[idx++] = strs[i][j++];
		k = 0;
		while (sep[k] && i < size - 1)
			p[idx++] = sep[k++];
		i++;
	}
	p[idx] = '\0';
}

int	ft_strs_len(char **strs, int size)
{	
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{	
		j = 0;
		while (strs[i][j])
		{	
			count++;
			j++;
		}
		i++;
	}
	return (count);
}
