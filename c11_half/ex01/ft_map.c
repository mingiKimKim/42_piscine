/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:22:17 by minjiki2          #+#    #+#             */
/*   Updated: 2023/02/02 02:11:32 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{	
	int	*p;
	int	i;

	p = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{	
		p[i] = f(tab[i]);
		i++;
	}
	return (p);
}
