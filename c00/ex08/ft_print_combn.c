/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dfs.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 14:17:43 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/17 21:09:23 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int depth, char result[]);
void	dfs(int depth, int current_depth, int next, char result[]);

void	ft_print_combn(int n)
{	
	int		current_depth;
	int		next;
	char	result[10];

	current_depth = 0;
	next = 0;
	dfs(n, current_depth, next, result);
	return ;
}

void	dfs(int depth, int current_depth, int next, char result[])
{	
	int	i;

	if (depth == current_depth)
	{	
		print_comb(depth, result);
		if (result[0] != 10 - depth + '0')
			write(1, ", ", 2);
	}
	else
	{	
		i = next;
		while (i < 10)
		{	
			result[current_depth] = i + '0';
			dfs(depth, current_depth + 1, i + 1, result);
			i++;
		}
	}
}

void	print_comb(int depth, char result[])
{	
	int	i;

	i = 0;
	while (i < depth)
	{	
		write(1, &result[i], 1);
		i++;
	}
}
