/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 10:19:58 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/29 17:14:55 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str);

char	*ft_strdup(char *src)
{
	int		size;
	char	*p;
	int		idx;

	size = str_len(src);
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (0);
	idx = 0;
	while (src[idx])
	{	
		p[idx] = src[idx];
		idx++;
	}
	p[idx] = '\0';
	return (p);
}

int	str_len(char *str)
{	
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
