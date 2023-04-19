/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:51:07 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/26 12:05:30 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	my_atoi(char *str, int i, int minus);

int	ft_atoi(char *str)
{	
	int	i;
	int	count;
	int	minus;
	int	result;

	i = 0;
	count = 0;
	minus = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	while ((str[i] == '-') || (str[i] == '+'))
	{	
		if (str[i] == '-')
		{	
			++count;
			if (count % 2 == 1)
				minus = -1;
			else if (count % 2 == 0)
				minus = 1;
		}
		++i;
	}
	result = my_atoi(str, i, minus);
	return (result);
}

int	my_atoi(char *str, int i, int minus)
{	
	int	result;

	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{	
		result = result * 10 + (str[i] - '0');
		i++;
	}
	result = result * minus;
	return (result);
}
