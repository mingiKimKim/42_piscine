/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:00:32 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/21 11:06:36 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_to_hex(unsigned char c);

void	ft_putstr_non_printable(char *str)
{	
	int	index;

	index = 0;
	while (str[index])
	{	
		if (str[index] < 32 || str[index] == 127)
		{	
			write(1, "\\", 1);
			print_to_hex(str[index]);
		}
		else
		{	
			write(1, &str[index], 1);
		}
		++index;
	}
}

void	print_to_hex(unsigned char c)
{	
	char	array[16];

	array[0] = '0';
	array[1] = '1';
	array[2] = '2';
	array[3] = '3';
	array[4] = '4';
	array[5] = '5';
	array[6] = '6';
	array[7] = '7';
	array[8] = '8';
	array[9] = '9';
	array[10] = 'a';
	array[11] = 'b';
	array[12] = 'c';
	array[13] = 'd';
	array[14] = 'e';
	array[15] = 'f';
	write(1, &array[c / 16], 1);
	write(1, &array[c % 16], 1);
}	
