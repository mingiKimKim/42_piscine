/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeolee2 <yeolee2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:22:57 by yeolee2           #+#    #+#             */
/*   Updated: 2023/01/22 22:06:51 by yeolee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_skyscraper(int board[4][4]);
int		ft_is_valid_board(int board[4][4], int input[16]);
int		ft_is_redundant(int board[4][4], int row, int col, int index);
int		ft_recursive(int board[4][4], int row, int col, int input[16]);

void	ft_print_skyscraper(int board[4][4])
{
	int		row;
	int		col;
	char	tmp;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			tmp = board[row][col] + '0';
			write(1, &tmp, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int	ft_is_redundant(int board[4][4], int row, int col, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < col)
	{
		if (board[row][i] == index)
			return (1);
		i++;
	}
	while (j < row)
	{
		if (board[j][col] == index)
			return (1);
		j++;
	}
	return (0);
}

int	ft_recursive(int board[4][4], int row, int col, int input[16])
{
	int	i;

	if (row == 4)
	{
		if (ft_is_valid_board(board, input))
			return (1);
		return (0);
	}
	else if (col == 4)
		return (ft_recursive(board, row + 1, 0, input));
	else
	{
		i = 1;
		while (i < 5)
		{
			board[row][col] = i;
			if (!ft_is_redundant(board, row, col, i))
				if (ft_recursive(board, row, col + 1, input))
					return (1);
			i++;
		}
	}
	return (0);
}
