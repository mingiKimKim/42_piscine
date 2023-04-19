/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:25:42 by minjiki2          #+#    #+#             */
/*   Updated: 2023/02/01 15:56:26 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					my_strlen(char *str);
char				*my_strdup(char *src);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

char	*my_strdup(char *src)
{
	int		size;
	char	*p;
	int		idx;

	size = my_strlen(src);
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

int	my_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{	
	struct s_stock_str	*p;
	int					i;

	p = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!p)
		return (0);
	i = 0;
	while (i < ac)
	{	
		p[i].str = av[i];
		p[i].size = my_strlen(av[i]);
		p[i].copy = my_strdup(av[i]);
		i++;
	}
	p[i].str = 0;
	return (p);
}
