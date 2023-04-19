/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pubnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:34:00 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/28 14:11:36 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	my_print(long long nbr, int len, char *base);
int		is_valid(char *base);
int		str_len(char *base);

void	ft_putnbr_base(int nbr, char *base)
{	
	int			base_len;
	int			idx;
	long long	nb;

	nb = (long long)nbr;
	base_len = str_len(base);
	idx = 0;
	while (base[idx])
	{
		if (base[idx] == '-' || base[idx] == '+')
			return ;
		++idx;
	}
	if (base_len == 0 || base_len == 1 || is_valid(base) == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
		my_print(nb, base_len, base);
	}
	else if (nb >= 0)
		my_print(nb, base_len, base);
}

void	my_print(long long nbr, int len, char *base)
{	
	char	c;

	if (nbr < len)
	{	
		c = *(base + (nbr % len));
		write(1, &c, 1);
	}
	else
	{	
		my_print(nbr / len, len, base);
		my_print(nbr % len, len, base);
	}
}

int	is_valid(char *base)
{	
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{	
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

int	str_len(char *base)
{	
	int	idx;

	idx = 0;
	while (base[idx])
		++idx;
	return (idx);
}
