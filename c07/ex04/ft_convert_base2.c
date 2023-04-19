/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:55:05 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/31 20:10:17 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_ft_atoi(char *str, char *base, int base_len);
int	base_index(char c, char *base);
int	check_base(char *base);
int	ft_is_valid(char *base);
int	mystrlen(char *str);

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	num;

	base_len = 0;
	while (base[base_len])
		++base_len;
	num = my_ft_atoi(str, base, base_len);
	return (num);
}

int	my_ft_atoi(char *str, char *base, int base_len)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	minus = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	while ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			++minus;
		++i;
	}
	while (str[i] && !(base_index(str[i], base) == -1))
	{
		num = num * base_len + (base_index(str[i], base));
		++i;
	}
	if (minus % 2 == 1)
		num *= (-1);
	return (num);
}

int	base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	idx;
	int	base_len;

	idx = 0;
	base_len = mystrlen(base);
	while (base[idx])
	{
		if (base[idx] == '-' || base[idx] == '+')
			return (0);
		if ((base[idx] >= 9 && base[idx] <= 13) || (base[idx] == 32))
			return (0);
		++idx;
	}
	if (base_len == 0 || base_len == 1 || ft_is_valid(base) == 0)
		return (0);
	return (1);
}

int	ft_is_valid(char *base)
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
