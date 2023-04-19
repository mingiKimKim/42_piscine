/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:02:15 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/29 16:58:00 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{	
	int	*p;
	int	idx;
	int	tmp;

	if (min >= max)
		return (0);
	p = (int *)malloc(sizeof(int) * (max - min));
	if (!p)
		return (0);
	idx = 0;
	tmp = min;
	while (idx < (max - min))
	{	
		p[idx] = tmp;
		idx++;
		tmp++;
	}
	return (p);
}
