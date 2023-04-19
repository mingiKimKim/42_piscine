/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:50:54 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/31 01:22:17 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{		
	int	*p;
	int	idx;
	int	tmp;

	if (min >= max)
	{
		p = NULL;
		return (0);
	}
	p = (int *)malloc(sizeof(int) * (max - min));
	if (!p)
		return (-1);
	idx = 0;
	tmp = min;
	while (idx < (max - min))
	{	
		p[idx] = tmp;
		idx++;
		tmp++;
	}
	*range = p;
	return (max - min);
}
