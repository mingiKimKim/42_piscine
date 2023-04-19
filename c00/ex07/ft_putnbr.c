/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:58:36 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/17 16:05:23 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i);
void	ft_putnbr(int nb);

void	print(int i)
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
		print(i);
		write(1, &remainder, 1);
	}
}

void	ft_putnbr(int nb)
{
	if ((nb < 0) && (nb != -2147483648))
	{
		nb = nb * (-1);
		write(1, "-", 1);
		print(nb);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		print(nb);
	}
}
