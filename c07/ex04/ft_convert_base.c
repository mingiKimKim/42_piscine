/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:54:22 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/31 20:09:41 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	put_in_array(char *p, int num, int *idx, char *base_to);
int		convert_base_size(long long num, int base_to_len);
int		my_ft_atoi(char *str, char *base, int base_len);
int		base_index(char c, char *base);
int		check_base(char *base);
int		ft_is_valid(char *base);
int		ft_atoi_base(char *str, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			num;
	int			base_to_len;
	int			size;
	char		*p;
	int			idx;

	idx = 0;
	base_to_len = 0;
	if (!(check_base(base_from) && check_base(base_to)))
		return (0);
	while (base_to[base_to_len])
		base_to_len++;
	num = ft_atoi_base(nbr, base_from);
	size = convert_base_size(num, base_to_len);
	p = (char *)malloc(sizeof(char) * (size + 2));
	p[0] = '-';
	if (!p)
		return (0);
	put_in_array(p + 1, num, &idx, base_to);
	p[size + 1] = 0;
	if (num >= 0)
		return (p + 1);
	return (p);
}

void	put_in_array(char *p, int num, int *idx, char *base_to)
{
	int	len;
	int	minus;

	if (num < 0)
		minus = -1;
	else
		minus = 1;
	len = 0;
	while (base_to[len])
		len++;
	if (num / len == 0)
	{
		p[*idx] = base_to[minus * (num % len)];
		*idx += 1;
	}
	else
	{
		put_in_array(p, num / len, idx, base_to);
		put_in_array(p, num % len, idx, base_to);
	}
}

int	convert_base_size(long long num, int base_to_len)
{
	int	size;

	size = 0;
	while (num / base_to_len)
	{
		size++;
		num = num / base_to_len;
	}
	return (size + 1);
}

int	mystrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
