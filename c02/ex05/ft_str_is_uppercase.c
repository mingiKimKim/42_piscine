/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjiki2 <minjiki2@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:37:59 by minjiki2          #+#    #+#             */
/*   Updated: 2023/01/18 20:49:20 by minjiki2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{	
	int	index;
	int	result;

	index = 0;
	result = 1;
	while (*(str + index))
	{	
		if ((*(str + index) >= 'A') && (*(str + index) <= 'Z'))
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
