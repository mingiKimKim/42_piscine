/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 16:29:34 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/16 15:30:20 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combination(char i, char j, char k);

void	combination(char i, char j, char k)
{	
	while ((i >= '0') && (i <= '7'))
	{
			j = i + 1;
		while ((j >= '1') && (j <= '8'))
		{	
				k = j + 1;
			while ((k >= '2') && (k <= '9'))
			{	
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (i * j * k != '7' * '8' * '9')
					write(1, ", ", 2);
					k++;
			}
				j++;
		}
			i++;
	}
}

void	ft_print_comb(void)
{
	combination('0', '0', '0');
}
