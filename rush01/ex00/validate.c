/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeolee2 <yeolee2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:23:25 by yeolee2           #+#    #+#             */
/*   Updated: 2023/01/22 21:32:41 by yeolee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_board(int board[4][4], int input[16]);

int	ft_check_top(int board[4][4], int *top)
{
	int	col;
	int	row;
	int	height;
	int	count;

	col = 0;
	while (col < 4)
	{
		row = 0;
		count = 0;
		height = 0;
		while (row < 4)
		{
			if (height < board[row][col])
			{
				height = board[row][col];
				count++;
			}
			row++;
		}
		if (count != top[col])
			return (0);
		col++;
	}
	return (1);
}

int	ft_check_bottom(int board[4][4], int *bottom)
{
	int	col;
	int	row;
	int	height;
	int	count;

	col = 0;
	while (col < 4)
	{
		row = 3;
		count = 0;
		height = 0;
		while (row >= 0)
		{
			if (height < board[row][col])
			{
				height = board[row][col];
				count++;
			}
			row--;
		}
		if (count != bottom[col])
			return (0);
		col++;
	}
	return (1);
}

int	ft_check_left(int board[4][4], int *left)
{
	int	row;
	int	col;
	int	height;
	int	count;

	row = 0;
	while (row < 4)
	{
		col = 0;
		count = 0;
		height = 0;
		while (col < 4)
		{
			if (height < board[row][col])
			{
				height = board[row][col];
				count++;
			}
			col++;
		}
		if (count != left[row])
			return (0);
		row++;
	}
	return (1);
}

int	ft_check_right(int board[4][4], int *right)
{
	int	row;
	int	col;
	int	height;
	int	count;

	row = 0;
	while (row < 4)
	{
		col = 3;
		count = 0;
		height = 0;
		while (col >= 0)
		{
			if (height < board[row][col])
			{
				height = board[row][col];
				count++;
			}
			col--;
		}
		if (count != right[row])
			return (0);
		row++;
	}
	return (1);
}

int	ft_is_valid_board(int board[4][4], int input[16])
{
	if (ft_check_top(board, &input[0]) == 0)
		return (0);
	if (ft_check_bottom(board, &input[4]) == 0)
		return (0);
	if (ft_check_left(board, &input[8]) == 0)
		return (0);
	if (ft_check_right(board, &input[12]) == 0)
		return (0);
	return (1);
}
