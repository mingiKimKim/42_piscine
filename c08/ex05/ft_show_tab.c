/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 00:47:43 by minjiki2          #+#    #+#             */
/*   Updated: 2023/02/01 23:23:22 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str);
void	print_int(long long num);
void	ft_show_tab(struct s_stock_str *par);

void	print_str(char *str)
{	
	int	i;

	i = 0;
	while (str[i])
	{	
		write(1, &str[i], 1);
		i++;
	}
}

void	print_int(long long num)
{	
	char	c;

	if (num < 0)
	{	
		write(1, "-", 1);
		num = num * (-1);
	}
	else
	{	
		if (num / 10 == 0)
		{	
			c = (num % 10) + '0';
			write(1, &c, 1);
		}
		else
		{	
			print_int(num / 10);
			print_int(num % 10);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{	
	int	i;

	i = 0;
	while (par[i].str)
	{	
		print_str(par[i].str);
		write(1, "\n", 1);
		print_int(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
