/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:53:09 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/19 20:20:43 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int				index;
	int				result;

	index = 0;
	result = 1;
	while (str[index])
	{		
		if ((str[index] >= 32) && (str[index] <= 126))
			result = 1;
		else
		{
			result = 0;
			return (result);
		}
		++index;
	}
	return (result);
}
