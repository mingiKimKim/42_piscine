/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:33:43 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/23 19:49:41 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i);
void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{	
		nb = nb * (-1);
		write(1, "-", 1);
		ft_print(nb);
	}
	else
	{	
		ft_print(nb);
	}
}

void	ft_print(int i)
{	
	char	share;
	char	remainder;

	if ((i / 10) == 0)
	{	
		i = i + '0';
		write(1, &i, 1);
	}
	else
	{	
		share = (i / 10) + '0';
		remainder = (i % 10) + '0';
		i = (i / 10);
		ft_print(i);
		write(1, &remainder, 1);
	}
}
