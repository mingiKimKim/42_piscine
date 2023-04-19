/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeolee2 <yeolee2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:58:25 by yeolee2           #+#    #+#             */
/*   Updated: 2023/01/22 20:58:25 by yeolee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_recursive(int board[4][4], int row, int col, int input[16]);
int		ft_is_valid_board(int board[4][4], int input[16]);
void	ft_print_skyscraper(int board[4][4]);
void	ft_initialized(int board[4][4]);

void	ft_initialized(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_is_valid_argv(char *str, int *input)
{
	int	idx;
	int	count;

	idx = 0;
	count = 0;
	while (str[idx])
	{
		if (idx % 2 == 0)
		{
			if (count == 16)
				return (1);
			if (!(str[idx] >= '1' && str[idx] <= '4'))
				return (1);
			input[count] = str[idx] - '0';
			count++;
		}
		else if (str[idx] != ' ')
			return (1);
		idx++;
	}
	if (!(count == 16 && idx == 31))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	input[16];

	if (argc != 2 || ft_is_valid_argv(argv[1], input))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ft_initialized(board);
	if (ft_recursive(board, 0, 0, input))
		ft_print_skyscraper(board);
	else
		write(2, "Error\n", 6);
	return (0);
}
