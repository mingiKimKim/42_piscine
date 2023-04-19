/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojchoi <sojchoi@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:56:08 by sojchoi           #+#    #+#             */
/*   Updated: 2023/01/15 20:58:42 by sojchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_firstline(int x);
void	put_middleline(int x);
void	put_lastline(int x);
void	ft_putchar(char c);
void	print_square(int x, int y);
void	rush(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_square(x, y);
	}
	else
	{
		ft_putchar('X');
		return ;
	}
}

void	print_square(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			put_firstline(x);
		}
		else if (i == y - 1)
		{
			put_lastline(x);
		}
		else
		{
			put_middleline(x);
		}
		ft_putchar('\n');
		i++;
	}
}

void	put_firstline(int x)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}		
		i++;
	}
}

void	put_middleline(int x)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	put_lastline(int x)
{
	int	i;

	i = 0;
	while (i != x)
	{
		if (i == 0)
		{
			ft_putchar('A');
		}
		else if (i == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		i++;
	}
}
