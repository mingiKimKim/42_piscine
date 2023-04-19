/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 17:31:23 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/17 15:30:29 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	print_num(int i);

void	ft_print_comb2(void)
{	
	int	i;
	int	j;

	i = 0;
	while ((i >= 0) && (i <= 98))
	{
		j = i + 1;
		while ((j >= 1) && (j <= 99))
		{
			print_num(i);
			write(1, " ", 1);
			print_num(j);
			if (!((i == 98) && (j == 99)))
				write(1, ", ", 2);
			j++;
		}
	i++;
	}
}

void	print_num(int num)
{	
	char	share;
	char	remainder;

	share = (num / 10) + '0';
	remainder = (num % 10) + '0';
	write(1, &share, 1);
	write(1, &remainder, 1);
	return ;
}	
