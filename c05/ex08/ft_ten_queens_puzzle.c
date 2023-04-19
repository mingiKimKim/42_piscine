/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:33:24 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/28 19:35:55 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(int arr[], int x_pos, int *count);
int		is_it_valid(int arr[], int x, int y);
void	ft_print_char(char c);

int	ft_ten_queens_puzzle(void)
{	
	int	arr[10];
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 10)
	{	
		arr[i] = -1;
		i++;
	}
	recursive(arr, 0, &count);
	return (count);
}

void	recursive(int arr[], int x_pos, int *count)
{
	int		y_pos;
	int		idx;

	if (x_pos == 10)
	{
		(*count)++;
		idx = -1;
		while (++idx < 10)
		{
			ft_print_char(arr[idx] + '0');
		}
		ft_print_char('\n');
	}
	else
	{	
		y_pos = 0;
		while (y_pos < 10)
		{
			arr[x_pos] = y_pos;
			if (is_it_valid(arr, x_pos, y_pos))
				recursive(arr, x_pos + 1, count);
			y_pos++;
		}
	}
}

void	ft_print_char(char c)
{	
	write(1, &c, 1);
}

int	is_it_valid(int arr[], int x, int y)
{	
	int	i;

	i = 0;
	while (i < x)
	{	
		if (y == arr[i] || y - arr[i] == x - i || y - arr[i] == -(x - i))
			return (0);
		i++;
	}
	return (1);
}
